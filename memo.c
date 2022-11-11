/* 
   Assignment #1 IoT 22: 
   ---------------------
   The deadline for the assessment is fixed to friday 18th november at 00:00.

   The grade can only be: G or IG.

   The goal of this assignment is to create a Linux/Unix command
   called "memo". With this command, one should be able to take notes
   that will be stored in a database. The database is a simple text file
   which should be called "memo.csv". The idea behind "memo" is to be able
   to use it as a notebook.

   The command "memo" should be able to receive various options that
   determine different behavior. The options that you have to implement
   are the following:

   -h Show this help.
   -i Init a new empty database. For example:
      memo -i "memo.csv" 
      Create a new empty database with the name "memo.csv"
   -a Append at the end of the database the following message.
      memo -a "This message will be included at the end of the database"
   -s Search and find specific entries in the database.
      memo -s "09-11-2022" will show all entries at a this given date.
      memo -s "programming" will show all entries containing the word
              "programming".
   -d Delete an entry in the database.
      memo -d 123 will delete entry number 123.

   Each entry in database should have the following format:

   Id,time,message

   Where Id is an integer that is given during the entry of the
   message. This number is equal to the last entry plus one. It is
   static and should not change.

   The field "time" is simply the time when the entry was done. It
   should have the following format:

   09-11-2022 10:30:06

   Note: Each entry in the database is comma separeted values (CSV).
   Which means that you'll be able to import the database e.g. in Excel.

   All functions have to be writen in a file called "libmemo.c" and need
   to be compiled as an independant object file (.o) that will be
   linked with the main program object file "memo.o" to create the
   final program "memo".

   All the function declarations, struct and macro
   need to be inside an header file called "memo.h". 

   Finally you need to write a makefile that compile and include the header
   file "memo.h" and link all object files to create the final
   executable "memo" with:

   make memo

   You can write the main function in this file "memo.c" but you'll have to
   create separately the files: libmemo.c memo.h and makefile.

   If you are developing:

   * On the linuxserver Raspberry Pi with address: 77.53.56.197 You'll
     have to create a directory called "inupp" where all the files
     including the header file "memo.h" have to be.

     When your are done, inside "inupp" directory and in the terminal write:

     touch DONE

     and logout out with:

     logout or (Ctr-D)

   * On your local computer you need to install Winscp, generate
     new public and private keys and be able to use the command scp
     (secure copy). 
     To download Winscp go to:
     https://winscp.net/eng/docs/free_ssh_client_for_windows

     Inside a terminal (Powershell or bash) write:

     scp -r -p yourmap/  username@77.53.56.197:
     
     Then loggin in your account with:

     ssh username@77.53.56.197

     go to the directory "inupp" with:

     cd inupp

     and create the file DONE with:
     
     touch DONE
     
     Then logout with:

     logout (or Ctrl-D)
    
*/
