//� �������������� ���������� ��� ����� �� ������ � ������ �������� ������ ���� ���������� ������� ���� � ��������� ��� ������ � �������� ������ ���� ��� <- ��� ������ �� ��� ���� ��� �

#include <iostream>

using namespace std;

int firstTask() {
	float R0;
	float R1;
	float R2;
	float R3;
	
	cin >> R1;
	cin >> R2;
	cin >> R3;

	R0 = 1 / R1 + 1 / R2 + 1 / R3;

	cout << 1/R0 << endl;

	return 0;
}


// https://grok.com/share/bGVnYWN5_46d3b6ce-f129-488d-ad5c-c4eed6e3ac09 <-- ��� � ���������� grok ��� ���� ��� �� ������� ��� ���� ������� ��� ������ ���� ��� ������ �� ������
int secondTask() {
	float pi = 3.14f;

	float R;
	float S;
	float L;

	cout << "Enter a long circle:"; cin >> L;

	R = L / (2*pi);
	S = pi * R * 2;
	cout << "Radius of a circle: " << R << " Circle Square: " << S << endl;
	return 0;
}

int thirdTask() {
	float S;
	float v;
	float t;
	float a;

	cin >> v;
	cin >> t;
	cin >> a;

	S = v * t + (a * t * 2) / 2;
	cout << S;
	return 0;
}

int quarterTask() {
	int second; cout << "Enter seconds: "; cin >> second;
	float minutes;
	float hour;

	minutes = second / 60;
	hour = minutes / 60;

	cout << "Hour: " << hour << "\nMinutes: " << minutes << "\nSecond: " << second;
	return 0;
}


int main() {
	firstTask();
	//secondTask();
	//thirdTask();
	//quarterTask();
}

