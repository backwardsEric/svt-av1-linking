#include <stdio.h>
#include <EbSvtAv1Enc.h>

int main(int argc, char *argv[])
{
	(void)printf("SvtAv1 version: %s\n", svt_av1_get_version());
	return 0;
}
