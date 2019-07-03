/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package 数据库;

/**
 *
 * @author 杨智康
 */
public class Staff {

    public String staffid;
    public String staffname,staffsex,hiredate,position,tel,birth,department,staffpwd;
    public Staff(){
        
    }
    public Staff(String staffid){
        this.staffid=staffid;
    }
    public Staff(String staffname,String staffsex,String hiredate,String position,String tel,String birth,String department,String staffpwd){
        this.staffname=staffname;
        this.staffsex=staffsex;
        this.hiredate=hiredate;
        this.position=position;
        this.tel=tel;
        this.birth=birth;
        this.department=department;
        this.staffpwd=staffpwd;
    }
     public Staff(String staffid, String staffname,String staffsex,String hiredate,String position,String tel,String birth,String department,String staffpwd){
        this.staffid=staffid;
        this.staffname=staffname;
        this.staffsex=staffsex;
        this.hiredate=hiredate;
        this.position=position;
        this.tel=tel;
        this.birth=birth;
        this.department=department;
        this.staffpwd=staffpwd;
    }

    public String getStaffid() {
        return staffid;
    }

    public void setStaffid(String staffid) {
        this.staffid = staffid;
    }

    public String getStaffname() {
        return staffname;
    }

    public void setStaffname(String staffname) {
        this.staffname = staffname;
    }

    public String getStaffsex() {
        return staffsex;
    }

    public void setStaffsex(String staffsex) {
        this.staffsex = staffsex;
    }

    public String getHiredate() {
        return hiredate;
    }

    public void setHiredate(String hiredate) {
        this.hiredate = hiredate;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }

    public String getTel() {
        return tel;
    }

    public void setTel(String tel) {
        this.tel = tel;
    }

    public String getBirth() {
        return birth;
    }

    public void setBirth(String birth) {
        this.birth = birth;
    }

    public String getDepartment() {
        return department;
    }

    public void setDepartment(String department) {
        this.department = department;
    }

    public String getStaffpwd() {
        return staffpwd;
    }

    public void setStaffpwd(String staffpwd) {
        this.staffpwd = staffpwd;
    }
    
    
}
