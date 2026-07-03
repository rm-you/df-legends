// FUN_1402822c0 @ 1402822c0
// callees:
//   -> 140071310 FUN_140071310


uint FUN_1402822c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  
  lVar1 = *param_1;
  uVar3 = (uint)(param_1[1] - lVar1 >> 3);
  do {
    uVar3 = uVar3 - 1;
    if ((int)uVar3 < 0) {
      return 0xffffffff;
    }
    iVar2 = FUN_140071310(*(undefined8 *)(lVar1 + (longlong)(int)uVar3 * 8),param_2);
  } while (iVar2 != 0);
  return uVar3 & 0xffff;
}

