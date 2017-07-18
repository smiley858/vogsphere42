# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bauer.sh                              :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchojnac <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/13 19:49:12 by gchojnac          #+#    #+#              #
#    Updated: 2017/07/13 21:54:45 by gchojnac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
ligne="$(cat $1 | grep -i "nicolas	bauer")"
ligne+="\n"
ligne+="$(cat $1 | grep -i admin@)"
ligne+="\n"
ligne+="$(cat $1 | grep -i nicolasbauer@)"
echo "$ligne" | grep -oE '[^@0-9][-0-9]+' | tr -d '[:blank:]' | tr -d '.' | awk 'length >= 6'
