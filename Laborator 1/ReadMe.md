# Laborator 1
----------------------------------------------------------------------
Continutul:
----------------------------------------------------------------------
1.Fisierul .rar in care se afla codul sursa si fisierele .exe ale
  aplicatiilor descrise in laboratorul 1;

2.Raportul in format .pdf al laboratorului 1;
----------------------------------------------------------------------
Despre:
----------------------------------------------------------------------
Au fost create 3 aplicatii cu ajutorul mediului Borland C++ Builder.
  
  1. Incrementor/decrementor - foloseste o variabila integer care
     este incrementata/decrementata odata cu click-ul butonului
     respectiv.

  2. Timer/Cronometru - foloseste instrumentul Timer pentru a afisa
     timpul si data curenta prin intermediul functiei gettime() si
     getdate(). Intervalul timer-ului este folosit pentru schimbarea
     variabilei ce calculeaza numarul de milisecunde din cronometru.

  3. Resurse grafice - afiseaza un bargraf si un grafic care sunt
     modificate in dependenta de pozitia x si y a componentei
     PaintBox. Functiile utilizate sunt MoveTo(x,y) , LineTo(x,y) ,
     Rectangle(x,y,x1,x2) care sunt desenate intr-un interval de
     timp specificat de Timer.
----------------------------------------------------------------------
Note:
----------------------------------------------------------------------
1. Forma si butoanele au fost create automat prin intermediul
   instrumentului drag-and-drop ale mediului de programare Borland
   C++ Builder.
   
2. Numele, stilul si alte detalii au fost create cu ajutorul
   instrumentului Object Inspector. Acelasi lucru putea fi facut
   apelind manual la cimpurile clasei.
   
3. Timerul lucreaza pe baza a 3 variabile de tip integer. Atunci cind
   variabila secundelor atinge valoarea 0, ea este resetata, iar variabila
   minutelor este incrementata cu 1.
   
4. Linia grafului si a bargrafului este deplasata cu o pozitie orizontala
   X constanta, insa pentru deplasarea ei verticala Y, este calculata
   o variabila random, care reprezinta numarul de pixeli cu care Y v-a fi
   deplasat.
-------------------------------------------------------------------------
   