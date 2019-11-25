
Simply copy multiple files at once from command line
There are several ways you could achieve this. The easiest I have seen is to use the following.

cp /home/usr/dir/{file1,file2,file3,file4} /home/usr/destination/
The syntax uses the cp command followed by the path to the directory the desired files are located in with all the files you wish to copy wrapped in brackets and separated by commas.

Make sure to note that there are no spaces between the files. The last part of the command, /home/usr/destination/, is the directory you wish to copy the files into.

or if the all the files have the same prefix but different endings you could do something like this:

cp /home/usr/dir/file{1..4} ./
Where file1,file2,file3 and file4 would be copied.

From how you worded the question I believe this is what you're looking for but it also sounds like you might be looking for a command to read from a list of files and copy all of them to a certain directory. If that is the case let me know and i'll edit my answer.

Dealing with duplicates with python
So I wrote a little python script that I believe should get the job done. However, I am not sure how well versed you are in python (if versed at all) so I will try explaining how to use this script the best I can and please ask as many questions about it as you need.