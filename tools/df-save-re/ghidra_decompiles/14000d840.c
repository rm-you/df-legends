// FUN_14000d840 @ 14000d840
// callees:


ulonglong FUN_14000d840(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  
  if (param_2 < 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  iVar1 = param_2 >> 3;
  if (((iVar1 < 0) || ((int)param_1[1] <= iVar1)) ||
     (uVar2 = 1, (*(byte *)((longlong)iVar1 + *param_1) & (byte)(1 << ((byte)param_2 & 7))) == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}

