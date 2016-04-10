# Laborator 3

Continutul:
----------------------------------------------------------------------
1. Fisierul "Calculator", in care se afla aplicatia creata in mediul
   de programare Visual Studio 2010, utilizind limbajul C++;

2. Raportul lucrarii in format PDF in care sunt descrisi pasii 
   efectuarii lucrarii de labarator.

4. Fisierul ReadMe.md cu informatie despre continutul lucrarii;

Despre:
----------------------------------------------------------------------
Conditia lucrarii de laborator era crearea unui GUI Calculator, care
va permite efectuarea operatiilor algebrice simple, cit si unele mai
avansate, precum ridicarea la putere, sau operatia radical.Deasemenea, 
calculatorul dat permite lucrul cu numere zecimale.

   1. In mare parte, forma si stilul calculatorului a fost setat prin
      intermediul instrumentului drag-and-drop al mediului de programare
	  Visual Studio 2010. Astfel au fost setate butoanele si zona de
	  introducere a textului.
	  
   2. Operatiile algebrice lucreaza prin intermediul a doua variabile de
      tip double, ce semnifica valoarea initiala si valoarea curenta, si
	  o variabila de tip char, care identifica operatia.
	  
   3. In cazul operatiei radical, a fost folosita functia din libraria
      C++ - <Math.h>. Aceasta functie foloseste un singur parametru,
	  adica un numar, si returneaza radicalul valorii date.
	  
   4. Calculatorul ofera suport pentru operatii multiple. Astfel, pot fi
      executate mai multe operatii consecutiv, si numai la apasarea 
	  butonului "=" va fi calculat rezultatul instructiunilor.
	  
   5. Deasemenea, programul este testat impotriva erorilor ce apar la
      executia operatiilor multiple, a celor de introducere a mai multor
	  caractere "." intr-un numar, etc.


   