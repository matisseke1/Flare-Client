#include "nopacket.h"

NoPacket::NoPacket(HANDLE hProcess, char option) {
	switch (option) {
	case 'N':
		mem::NopEx((BYTE*)mem::moduleBase + 0xF984ED, 7, hProcess);
	break;

	case 'F':
		mem::PatchEx((BYTE*)mem::moduleBase + 0xF984ED, (BYTE*)"\x80\xB8\x31\x03\x00\x00\x00", 7, hProcess);
	break;
	}
}