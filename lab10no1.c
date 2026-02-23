#include <stdio.h>

typedef struct {
	char loginname[64];
	char password[64];
} account ;

typedef struct {
	char stdID[16];
	char nameSurname[25];
	account stdACC;
} hoststd;

int main(){
	hoststd cs[5] = {
		{"66-040626-2686-9","MR.A",{"user1", "passwd1"}},
		{"66-040626-2687-9","MR.B",{"user2", "passwd2"}},
		{"66-040626-2688-9","MR.C",{"user3", "passwd3"}},
		{"66-040626-2689-9","MR.D",{"user4", "passwd4"}},
		{"66-040626-2690-9","MR.E",{"user5", "passwd5"}}
	};
	
}
