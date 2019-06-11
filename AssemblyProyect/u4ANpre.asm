public _Add
public _Sub

.386
.model flat

extern _TellC:proc

.code

_Add	proc
		push ebp
		mov ebp, esp

		mov ebx,[ebp+8]
		mov ecx,[ebp+12]
		add ebx,ecx

		push ebx
		call _TellC
		pop eax

		pop ebp
		ret
_Add endp

_Sub	proc
		push ebp
		mov ebp, esp

		mov ebx,[ebp+8]
		mov ecx,[ebp+12]
		sub ebx,ecx

		push ebx
		call _TellC
		pop eax

		pop ebp
		ret
_Sub endp

.data
end