ldapsearch -x sn="*BON*" | grep "^cn" | wc -l | tr -d ' '