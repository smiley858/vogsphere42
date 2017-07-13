ldapsearch -LLL "(sn=*bon*)" sn | grep sn | wc -l | tr -d '[:blank:]'
