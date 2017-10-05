Getting Started!
 Not much to this one. Click on Hints, copy and paste the key.

givekey
 Basic netcat command suffices `$nc enigma2017.hackcenter.com 21110`

readasm
 This one takes a little bit of knowledge of assembly. The 4th command separates esp 0x60, and the 5th command separates esp an additional 0x4. This totals up to 0x64 which is 100 in decimal.

xxdme
 This is a basic forensic problem. Download the file, then run the command `$xxd <myfile>`. The last bytes of data in the file include the key

EBG13
 This one shows a lot of letters, so first guess is a caesar cipher. I ran the script in my 'scripts' directory on github to determine it was 13 (though the name of the problemalso suggests that). 

kolmogorov
 This tests basic knowledge of communicating with a remote server. I used the python interpreter and sent and received data using a socket connection.

sshkey
 I followed this tutorial "https://www.digitalocean.com/community/tutorials/how-to-set-up-ssh-keys--2" but used scp instead of ssh-copy because I was facing issues.

asmtosie 0
 This one was pretty fun for me. I didn't have much knowledge of C, so I did some brief lessons on "http://www.learn-c.org/". At the top, the function is described as "int testb(int)". Then in the assembly we can see there are 8 bytes assigned for eax. Then eax is used in a multiplication function with the number -1162764655. So the solution stores the result of the multiplication and returns it. To see my code, check out my asmtosie.c file.

crashme1
 Looking at the source code, we see there is a buffer of 64 characters and that the key is printed in the seghandler function. From previous knowledge I knew that a Segmentation Fault is a classic error that comes up when you exploit a buffer overflow. Enter 65 characters and get the key.

Client Side Authentication:
 From the title, the first step we want to take is to look at the page source. We see a javascript function at the top called login(). Probably worth checking out.From the if statement, we can see if the hash equals a certain string, you get in! Great, let's see if there is a known matching string for this hash using an online tool. I just used md5hashing.net (has a sha256 option). I found no matches, so I took another look at the source. Then I noticed that "correct" authentication just takes you to another resource on the site. Forcefully browse to the document.location string to get the flag. 

ArpArpArp:
 Fair warning, I am not confident in my solution strategy for this one. First, open the traffic up in wireshark. We can see there are a number of arp requests and subsequent UDP requests with data. However, all of the UDP requests are supposedly coming from the same IP address. Wireshark gave me a hint that said all of the other ARP addresses were spoofed besides 3, so I manually wrote all the data from 3 down to get the flag. 

CBC:
 First, I Googled CBC and found out it is a block cipher mode of operation. I looked up an online tool to decrypt CBC AES and found 'http://aes.online-domain-tools.com/'. Noticing I had all of the required values, I plugged them in and got my solution. 
