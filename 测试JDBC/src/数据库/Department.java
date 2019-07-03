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
public class Department {
    public String departments,dno,manager,dnumber;
    public Department(){
        
    }

    public Department(String dno) {
        this.dno = dno;
    }
    
    public Department(String departments,String dno,String manager,String dnumber){
        this.departments=departments;
        this.dno=dno;
        this.manager=manager;
        this.dnumber=dnumber;
    }

    public String getDepartments() {
        return departments;
    }

    public void setDepartments(String departments) {
        this.departments = departments;
    }

    public String getDno() {
        return dno;
    }

    public void setDno(String dno) {
        this.dno = dno;
    }

    public String getManager() {
        return manager;
    }

    public void setManager(String manager) {
        this.manager = manager;
    }

    public String getDnumber() {
        return dnumber;
    }

    public void setDnumber(String dnumber) {
        this.dnumber = dnumber;
    }
    
}
