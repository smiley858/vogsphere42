#!/bin/bash
LDAP=$(ldapwhoami | grep "dn:" | cut -c4-)
echo $LDAP
