#include "..\..\common.h"

int main(int argc, char* argv[]) {
	// ���� �ʱ�ȭ
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
		return 1;
	printf("[ �˸� ] ���� �ʱ�ȭ ���� \n");

	// IPv6 �������� ��� UDP ���� ����
	SOCKET sock = socket(AF_INET6, SOCK_DGRAM, 0);
	if (sock == INVALID_SOCKET)
		err_quit("socket()");
	printf("[ �˸� ] ���� ���� ���� \n");

	// ���� �ݱ�
	closesocket(sock);

	// ���� ����
	WSACleanup();
	return 0;
}