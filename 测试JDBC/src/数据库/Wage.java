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
public class Wage {
    public String staffid,staffname,leave,basicwage,poswage,otwage,realwage,month,natax,pltax,elderins,medins,way;
    public Wage(){
        
    }
    public Wage(String staffid){
        this.staffid=staffid;
    }
    public Wage(String staffid, String staffname, String basicwage, String poswage, String natax, String pltax, String elderins, String medins, String way) {
        this.staffid = staffid;
        this.staffname = staffname;
        this.basicwage = basicwage;
        this.poswage = poswage;
        this.natax = natax;
        this.pltax = pltax;
        this.elderins = elderins;
        this.medins = medins;
        this.way = way;
    }
    
    public Wage(String staffid,String staffname,String leave,String basicwage,String poswage,String otwage,String realwage,String month,String natax,String pltax,String elderins,String medins,
            String way){
        this.staffid=staffid;
        this.staffname=staffname;
        this.leave=leave;
        this.basicwage=basicwage;
        this.poswage=poswage;
        this.otwage=otwage;
        this.realwage=realwage;
        this.month=month;
        this.natax=natax;
        this.pltax=pltax;
        this.elderins=elderins;
        this.medins=medins;
        this.way=way;
    }
    public Wage(String staffname,String leave,String basicwage,String poswage,String otwage,String realwage,String month,String natax,String pltax,String elderins,String medins,String way){
        this.staffname=staffname;
        this.leave=leave;
        this.basicwage=basicwage;
        this.poswage=poswage;
        this.otwage=otwage;
        this.realwage=realwage;
        this.month=month;
        this.natax=natax;
        this.pltax=pltax;
        this.elderins=elderins;
        this.medins=medins;
        this.way=way;
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

    public String getLeave() {
        return leave;
    }

    public void setLeave(String leave) {
        this.leave = leave;
    }

    public String getBasicwage() {
        return basicwage;
    }

    public void setBasicwage(String basicwage) {
        this.basicwage = basicwage;
    }

    public String getPoswage() {
        return poswage;
    }

    public void setPoswage(String poswage) {
        this.poswage = poswage;
    }

    public String getOtwage() {
        return otwage;
    }

    public void setOtwage(String otwage) {
        this.otwage = otwage;
    }

    public int getRealwage() {
        return new Integer(basicwage)+new Integer(poswage)+new Integer(otwage)-new Integer(leave)-new Integer(natax)-new Integer(pltax)-new Integer(elderins)-new Integer(medins);
    }

    public void setRealwage(String realwage) {
        this.realwage = realwage;
    }

    public String getMonth() {
        return month;
    }

    public void setMonth(String month) {
        this.month = month;
    }

    public String getNatax() {
        return natax;
    }

    public void setNatax(String natax) {
        this.natax = natax;
    }

    public String getPltax() {
        return pltax;
    }

    public void setPltax(String pltax) {
        this.pltax = pltax;
    }

    public String getElderins() {
        return elderins;
    }

    public void setElderins(String elderins) {
        this.elderins = elderins;
    }

    public String getMedins() {
        return medins;
    }

    public void setMedins(String medoms) {
        this.medins = medoms;
    }

    public String getWay() {
        return way;
    }

    public void setWay(String way) {
        this.way = way;
    }
    
    
}
