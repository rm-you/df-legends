// FUN_140361540 @ 140361540
// callees:
//   -> 140071310 FUN_140071310


ulonglong FUN_140361540(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  ushort uVar3;
  
  lVar1 = *param_1;
  uVar3 = (ushort)(param_1[1] - lVar1 >> 3);
  do {
    uVar3 = uVar3 - 1;
    if ((short)uVar3 < 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_140071310(*(undefined8 *)(lVar1 + (longlong)(short)uVar3 * 8),param_2);
  } while (iVar2 != 0);
  return (ulonglong)uVar3;
}

