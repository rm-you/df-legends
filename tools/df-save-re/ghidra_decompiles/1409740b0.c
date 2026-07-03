// FUN_1409740b0 @ 1409740b0
// callees:
//   -> 1409740b0 FUN_1409740b0


undefined8 FUN_1409740b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  cVar1 = (**(code **)(*param_2 + 0x588))
                    (param_2,*(undefined2 *)(param_1 + 10),*(undefined2 *)(param_1 + 0xc),
                     *(undefined2 *)(param_1 + 0xe),*(undefined2 *)(param_1 + 0x10));
  if (cVar1 != '\0') {
    return 1;
  }
  if ((*(byte *)(param_2 + 2) & 0x40) != 0) {
    iVar4 = 0;
    if (param_2[8] - param_2[7] >> 3 != 0) {
      lVar5 = 0;
      do {
        iVar2 = (**(code **)(**(longlong **)(lVar5 + param_2[7]) + 0x10))();
        if ((iVar2 == 10) &&
           (lVar3 = (**(code **)(**(longlong **)(lVar5 + param_2[7]) + 0x18))(), lVar3 != 0)) {
          cVar1 = FUN_1409740b0(param_1,lVar3,1);
          if (cVar1 != '\0') {
            return 1;
          }
        }
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while ((ulonglong)(longlong)iVar4 < (ulonglong)(param_2[8] - param_2[7] >> 3));
    }
  }
  return 0;
}

