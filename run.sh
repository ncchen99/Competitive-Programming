OPTION=1
while getopts "-n ?" opt; do  
    git add .
    git commit -m $opt
    git push GitHub master
done
