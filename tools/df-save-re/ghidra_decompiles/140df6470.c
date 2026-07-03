// FUN_140df6470 @ 140df6470
// callees:
//   -> 140dfdcc6 memcpy
//   -> 140df61e0 FUN_140df61e0
//   -> 140dfc99c memset


void FUN_140df6470(longlong *param_1)

{
  ushort *puVar1;
  uint uVar2;
  short sVar3;
  short *psVar4;
  ulonglong uVar5;
  ulonglong _Size;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)((longlong)param_1 + 0x44);
  _Size = (ulonglong)uVar2;
  while( true ) {
    iVar6 = ((int)param_1[0xb] - *(int *)((longlong)param_1 + 0x9c)) -
            *(uint *)((longlong)param_1 + 0x94);
    if (*(int *)((longlong)param_1 + 0x44) + -0x106 + uVar2 <= *(uint *)((longlong)param_1 + 0x94))
    {
      memcpy((void *)param_1[10],(void *)(param_1[10] + _Size),_Size);
      uVar5 = (ulonglong)*(uint *)((longlong)param_1 + 0x74);
      *(uint *)(param_1 + 0x13) = (int)param_1[0x13] - uVar2;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) - uVar2;
      *(int *)((longlong)param_1 + 0x84) = *(int *)((longlong)param_1 + 0x84) - uVar2;
      psVar4 = (short *)(param_1[0xd] + uVar5 * 2);
      do {
        puVar1 = (ushort *)(psVar4 + -1);
        psVar4 = psVar4 + -1;
        if (*puVar1 < uVar2) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar2;
        }
        *psVar4 = sVar3;
        uVar8 = (int)uVar5 - 1;
        uVar5 = (ulonglong)uVar8;
      } while (uVar8 != 0);
      psVar4 = (short *)(param_1[0xc] + _Size * 2);
      uVar5 = _Size;
      do {
        puVar1 = (ushort *)(psVar4 + -1);
        psVar4 = psVar4 + -1;
        if (*puVar1 < uVar2) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar2;
        }
        *psVar4 = sVar3;
        uVar8 = (int)uVar5 - 1;
        uVar5 = (ulonglong)uVar8;
      } while (uVar8 != 0);
      iVar6 = iVar6 + uVar2;
    }
    if (*(int *)(*param_1 + 8) == 0) break;
    iVar6 = FUN_140df61e0(*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0x9c) +
                                   (ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10],
                          iVar6);
    *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + iVar6;
    uVar8 = *(uint *)((longlong)param_1 + 0x9c);
    if (2 < uVar8) {
      uVar7 = (uint)*(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
      *(uint *)(param_1 + 0xe) = uVar7;
      *(uint *)(param_1 + 0xe) =
           (uVar7 << ((byte)(int)param_1[0x10] & 0x1f) ^
           (uint)*(byte *)((ulonglong)(*(uint *)((longlong)param_1 + 0x94) + 1) + param_1[10])) &
           *(uint *)((longlong)param_1 + 0x7c);
    }
    if ((0x105 < uVar8) || (*(int *)(*param_1 + 8) == 0)) {
      uVar2 = *(uint *)(param_1 + 0x2e3);
      uVar7 = *(uint *)(param_1 + 0xb);
      if (uVar2 < uVar7) {
        uVar8 = *(int *)((longlong)param_1 + 0x94) + uVar8;
        if (uVar2 < uVar8) {
          uVar7 = uVar7 - uVar8;
          if (0x102 < uVar7) {
            uVar7 = 0x102;
          }
          memset((void *)((ulonglong)uVar8 + param_1[10]),0,(ulonglong)uVar7);
          *(uint *)(param_1 + 0x2e3) = uVar7 + uVar8;
        }
        else if (uVar2 < uVar8 + 0x102) {
          uVar8 = (uVar8 - uVar2) + 0x102;
          if (uVar7 - uVar2 < uVar8) {
            uVar8 = uVar7 - uVar2;
          }
          memset((void *)((ulonglong)uVar2 + param_1[10]),0,(ulonglong)uVar8);
          *(uint *)(param_1 + 0x2e3) = (int)param_1[0x2e3] + uVar8;
        }
      }
      return;
    }
  }
  return;
}

