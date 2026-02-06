class Badge {
    public String print(Integer id, String name, String department) {
        String dep = (department == null) ? " - OWNER" : " - " + department.toUpperCase();
        String idx = (id == null) ? "" : "[" + id + "] - ";

        return idx + name + dep;
    }
}
