cat /etc/passwd | grep -v '#' | cut -d : -f 1  | sed -n 'n;p;' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ',' | sed -e 's:,:,\ :g' -e 's:,\ $:.:' | tr -d '\n'
