// FUN_140c7e080 @ 140c7e080
// callees:
//   -> 14000d840 FUN_14000d840
//   -> 140366ce0 FUN_140366ce0
//   -> 140c5af70 FUN_140c5af70
//   -> 1409fc0c0 FUN_1409fc0c0
//   -> 140c7dec0 FUN_140c7dec0


ulonglong FUN_140c7e080(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  short sVar9;
  ushort uVar10;
  
  uVar7 = 0;
  sVar9 = (short)((longlong)
                  (ulonglong)(uint)((*(int **)(param_1 + 0x5d8))[2] - **(int **)(param_1 + 0x5d8))
                 >> 3) + -1;
  if (-1 < sVar9) {
    uVar8 = (ulonglong)sVar9;
    do {
      if (((((sVar9 < 0) ||
            (lVar1 = **(longlong **)(param_1 + 0x5d8),
            (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar1 >> 3) <= uVar8)) ||
           (cVar2 = FUN_14000d840(*(longlong *)(lVar1 + uVar8 * 8) + 0x48,5), cVar2 == '\0')) ||
          ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar8 * 4) & 0x800) != 0)) &&
         ((((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar8 * 4) & 0x80002) == 0 &&
           (cVar2 = FUN_140366ce0(param_1), cVar2 == '\0')) &&
          ((*(uint *)(param_1 + 0x110) & 0x8000) == 0)))) {
        cVar2 = (char)sVar9;
        if ((((-1 < cVar2) &&
             (lVar1 = **(longlong **)(param_1 + 0x5d8),
             (ulonglong)(longlong)cVar2 <
             (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar1 >> 3))) &&
            (cVar3 = FUN_14000d840(*(longlong *)(lVar1 + (longlong)cVar2 * 8) + 0x48,10),
            cVar3 != '\0')) ||
           ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)cVar2 * 4) & 0x100000) != 0)) {
          iVar4 = FUN_140c5af70(param_1,sVar9);
          uVar7 = uVar7 + iVar4;
        }
      }
      uVar8 = uVar8 - 1;
      sVar9 = sVar9 + -1;
    } while (-1 < sVar9);
    if (0 < (int)uVar7) {
      if (uVar7 < 2) {
        uVar7 = 0;
      }
      else {
        uVar5 = FUN_1409fc0c0();
        uVar7 = (uVar5 + (int)((longlong)((ulonglong)uVar5 * 0x100000003) >> 0x3f) * 0x7fffffff) /
                ((int)(0x7fffffff / (ulonglong)uVar7) + 1U);
      }
      iVar4 = 0;
      uVar10 = (ushort)((longlong)
                        (ulonglong)
                        (uint)((*(int **)(param_1 + 0x5d8))[2] - **(int **)(param_1 + 0x5d8)) >> 3);
joined_r0x000140c7e1ff:
      do {
        uVar10 = uVar10 - 1;
        if ((short)uVar10 < 0) goto LAB_140c7e276;
        if (-1 < (short)uVar10) {
          lVar1 = **(longlong **)(param_1 + 0x5d8);
          uVar8 = (ulonglong)(short)uVar10;
          if (((uVar8 < (ulonglong)((*(longlong **)(param_1 + 0x5d8))[1] - lVar1 >> 3)) &&
              (cVar2 = FUN_14000d840(*(longlong *)(lVar1 + uVar8 * 8) + 0x48,5), cVar2 != '\0')) &&
             ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + uVar8 * 4) & 0x800) == 0))
          goto joined_r0x000140c7e1ff;
        }
        if ((*(uint *)(*(longlong *)(param_1 + 0x4d0) + (longlong)(short)uVar10 * 4) & 0x80002) == 0
           ) {
          iVar6 = FUN_140c5af70(param_1,uVar10);
          iVar4 = iVar4 + iVar6;
          if ((int)uVar7 < iVar4) {
LAB_140c7e276:
            if ((longlong)(short)uVar10 ==
                (*(longlong **)(param_1 + 0x5d8))[1] - **(longlong **)(param_1 + 0x5d8) >> 3) {
              return 0;
            }
            return (ulonglong)uVar10;
          }
        }
      } while( true );
    }
  }
  uVar8 = FUN_140c7dec0(param_1);
  return uVar8;
}

