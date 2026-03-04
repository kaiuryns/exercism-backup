class BankAccount
  def initialize
    @status = false
    @balance = 0
  end
  
  def open
    error("You can't open an already open account") if status?
    @status = true
    @balance = 0
  end

  def close
    validation!("You can't close an already closed account")
    @status = false
  end

  def deposit(value)
    validation!("You can't deposit money into a closed account")
    error("You can't deposit a negative amount") if value < 0
    @balance += value
  end

  def withdraw(value)
    validation!("You can't withdraw money into a closed account")
    error("You can't withdraw more than you have") if value > @balance
    error("You can't withdraw a negative amount") if value < 0
    @balance -= value
  end

  def balance
    validation!("You can't check the balance of a closed account")
    @balance
  end

  private

  def status?
    @status
  end

  def validation!(mensagem)
    error(mensagem) unless status?
  end

  def error(mensagem)
    raise ArgumentError, mensagem
  end
end
