/*
 * runme.c
 * 
 * Copyright 2017 shad0w <x32@parrot>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("sudo cd /etc");
	printf("Fixing issues wait!\n");
	system("rm -f /etc/resolv.conf");
	system("echo 'nameserver 8.8.8.8' > resolv.conf");
	printf("resolv.conf modified\n");
	printf("I need to delete myself\n");
	system("sudo rm -f runme.c");
	system("sudo rm -f runme");
	system("sudo rm -f runme.o");
	printf("Done...\n");
	return 0;
}

