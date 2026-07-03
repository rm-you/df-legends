// FUN_1404937d0 @ 1404937d0
// callees:
//   -> 140002250 FUN_140002250
//   -> 1405bba90 FUN_1405bba90
//   -> 14000b9d0 FUN_14000b9d0
//   -> 140dfb5c4 operator_new
//   -> 140dfc99c memset


void FUN_1404937d0(longlong param_1,undefined8 param_2,int param_3)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_140002250(param_2,param_1);
  FUN_1405bba90(param_2,local_res18,4);
  FUN_14000b9d0(param_1 + 0x18);
  iVar4 = 0;
  if (0 < local_res18[0]) {
    lVar5 = 0;
    do {
      _Dst = operator_new(0x100);
      memset(_Dst,0,0x100);
      lVar2 = 0x10;
      *(void **)(lVar5 + *(longlong *)(param_1 + 0x18)) = _Dst;
      lVar1 = *(longlong *)(lVar5 + *(longlong *)(param_1 + 0x18));
      do {
        lVar3 = 0x10;
        do {
          FUN_1405bba90(param_2,lVar1,1);
          lVar1 = lVar1 + 1;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < local_res18[0]);
  }
  return;
}

