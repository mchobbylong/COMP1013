# COMP1013 Structured Programming Group Project

Here is the document of **"COMP1013 Structured Programming Group Project"**, which is translated from the Word (.docx) file.

Suggested command for compiling the project (using g++ included in TDM-GCC on Windows): 

g++ -o Main Main.cpp FileIO.cpp Transaction.cpp

---

## User Manual

Welcome to the bank system! If you have some problems, you can follow the following instructions to figure out.

Initially, the system allows you to use Inquire, Save, Withdraw, Transfer, Quit services, they will be introduced as listed. It is necessary that you need to input figure (1-5) in order to run the function you want.



**1.** **Withdraw**

You need to input your account number and password at the very beginning, for instance: 0123 1111. Then it will show the hint “Please input the amount number you want to withdraw:”, notice that if your account is normal, the customer can withdraw at most 2000 per time; if your account is VIP, the customer can withdraw 3000 per time. For instance, you can input: 1800, which means you will withdraw 1800 from your account.

 

**2.** **Save**

Here you need to input your account and the money number which you want to save. For example: 0123 1000, which means save 1000 to the account whose number is 0123. Then you need to confirm your operation: “Y” and “y” is for yes, “N” and “n” is for no.

 

**3.** **Transfer**

Here you need to input your account number and password at the very beginning, then you need to input the destination account number and the account number which you want to transfer to, for instance: 2341 1000, which means transfer 1000 to the account whose number is 2341. Then you need to confirm your operation: “Y” and “y” is for yes, “N” and “n” is for no. Notice that If your account is VIP, the charge for the transaction is 0.5%; otherwise, the charge is 1%. Also, a VIP account can transfer at most 20000 and a normal account can transfer at most 10000.

 

**4.** **Inquire**

Here you need to input your account number and password at the very beginning, then you can get your balance number.