// FUN_1400b4990 @ 1400b4990
// callees:
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140dfc99c memset
//   -> 1400b46b0 FUN_1400b46b0
//   -> 1405bb6d0 FUN_1405bb6d0
//   -> 14000bd10 FUN_14000bd10


void FUN_1400b4990(ulonglong *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  void *_Dst;
  undefined8 *puVar3;
  ulonglong uVar4;
  void *local_res8;
  undefined1 local_res18 [8];
  
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1);
  puVar1 = (undefined8 *)param_1[1];
  for (puVar3 = (undefined8 *)*param_1; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    _Dst = operator_new(0x708);
    local_res8 = _Dst;
    memset(_Dst,0,0x400);
    *(undefined4 *)((longlong)_Dst + 0x400) = 0;
    memset((void *)((longlong)_Dst + 0x404),0,0x300);
    *(undefined4 *)((longlong)_Dst + 0x704) = 0;
    *puVar3 = _Dst;
    FUN_1400b46b0(_Dst);
  }
  FUN_1405bba90(param_2,param_1 + 3,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x1c,4);
  FUN_1405bba90(param_2,param_1 + 4,4);
  FUN_1405bba90(param_2,(longlong)param_1 + 0x24,4);
  FUN_1405bb6d0(param_2,param_1 + 5);
  FUN_1405bba90(param_2,param_1 + 9,4);
  if (0x633 < param_3) {
    FUN_1405bba90(param_2,(longlong)param_1 + 0x4c,4);
    FUN_1405bba90(param_2,param_1 + 10,4);
  }
  if (0x634 < param_3) {
    FUN_1405bba90(param_2,&local_res8,4);
    FUN_14000bd10(param_1 + 0xb,(longlong)(int)local_res8);
    uVar2 = param_1[0xc];
    for (uVar4 = param_1[0xb]; uVar4 < uVar2; uVar4 = uVar4 + 4) {
      FUN_1405bba90(param_2,uVar4,4);
    }
  }
  if (0x635 < param_3) {
    FUN_1405bba90(param_2,param_1 + 0xe,4);
    FUN_1405bba90(param_2,(longlong)param_1 + 0x74,4);
  }
  return;
}

