
;*********************************************************************************************************************************
;  ���������� ���� ��������, ����������, �������, ������
;*********************************************************************************************************************************

; ��������� .......................

stack           equ     60h

;..................................


dseg  at 30h

	buf_txt: ds 17
	faza:    ds 1
	h_st:  ds 1
	qq_t:  ds 1
	
	; BUF_L - LOW    - ������� �����
	; BUF_M - MIDDLE - ������� ����� 
	; BUF_H - HIGH   - ����� ����� 
	
	BUF_1: ds 1 
	BUF_2: ds 1 ; ������ ��� 3 ������� 1��� �����
	BUF_X: ds 1
	
	BUF_COP: ds 1 
	BUF_2M: ds 1 ; ������ ��� 3 ������� 2��� �����
	BUF_2H: ds 1
	
	KOD_KL:  	ds 1 ; ������ � ����� ������              ; ��� ������ � ����-�����������
	KOD_ST_4: 	ds 1 ; ������ � ������� �����������       ; ��� ������ � ����-�����������
	KOD_DOP: 	ds 1 ; �������������� ������              ; ��� ������ � ����-�����������
	KOD_PRM: 	ds 1 ; ������ ������ ������� �� SBUF      ; ��� ������ � �� �����������
	
	BUF_RESULT_L: ds 1 
	BUF_RESULT_H: ds 1 ; ������ ��� 3 ������� 2��� �����
	BUF_3H: ds 1
	
bseg at  0h     ; ������� ������� ������� 

	F_KL:   DBIT 1      ;  ���� ������� �� ������
	f_1s:   DBIT 1      ;  ���� ������� 1 ���
	FISP:   DBIT 1      ;  ���� ������������� ������� ������
	F_KLD:  DBIT 1      ;  ���� ������� ������
	BITC:   DBIT 1      ;     ��� � ��� ������ 3 ���������

	F_neg:   DBIT 1      ;  ���� �����1 > �����2
	F_Z:   DBIT 1      ;  
	F_L:   DBIT 1      ;  
 