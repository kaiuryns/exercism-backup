class ListOps
  def self.arrays(list)
    count = 0
    list.each { |_| count += 1 }
    count
  end

  def self.reverser(list)
    list.reverse
  end

  def self.concatter(list1, list2)
    list1 + list2
  end

  def self.mapper(list)
    new_list = []
    list.each { |n| new_list << yield(n) }
    new_list
  end

  def self.filterer(list)
    new_list = []
    list.each { |n| new_list << n if yield(n) }
    new_list
  end

  def self.sum_reducer(list)
    number = 0
    list.each { number += _1 }
    number
  end

  def self.factorial_reducer(list)
    number = 1
    list.each { number *= _1 }
    number
  end
end