// FUN_140df7140 @ 140df7140
// callees:
//   -> 140df6470 FUN_140df6470
//   -> 140dfabf0 FUN_140dfabf0
//   -> 140dfdcc6 memcpy
//   -> 140df57b0 FUN_140df57b0


undefined4 FUN_140df7140(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  short *psVar3;
  char cVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  char *pcVar13;
  bool bVar14;
  
  lVar11 = 0;
  do {
    uVar12 = *(uint *)((longlong)param_1 + 0x9c);
    if (uVar12 < 0x102) {
      FUN_140df6470(param_1);
      uVar12 = *(uint *)((longlong)param_1 + 0x9c);
      if ((uVar12 < 0x102) && (param_2 == 0)) {
        return 0;
      }
      if (uVar12 == 0) {
        uVar12 = *(uint *)((longlong)param_1 + 0x84);
        if (-1 < (int)uVar12) {
          lVar11 = (ulonglong)uVar12 + param_1[10];
        }
        FUN_140dfabf0(param_1,lVar11,*(int *)((longlong)param_1 + 0x94) - uVar12,param_2 == 4);
        *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
        FUN_140df57b0(*param_1);
        if (*(int *)(*param_1 + 0x18) != 0) {
          uVar5 = 1;
          if (param_2 == 4) {
            uVar5 = 3;
          }
          return uVar5;
        }
        if (param_2 == 4) {
          return 2;
        }
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0x11) = 0;
    if ((2 < uVar12) && (*(uint *)((longlong)param_1 + 0x94) != 0)) {
      pcVar13 = (char *)(param_1[10] + (ulonglong)*(uint *)((longlong)param_1 + 0x94));
      cVar4 = pcVar13[-1];
      if ((cVar4 == *pcVar13) && ((cVar4 == pcVar13[1] && (cVar4 == pcVar13[2])))) {
        pcVar6 = pcVar13 + 2;
        do {
          pcVar7 = pcVar6 + 1;
          if (((((cVar4 != pcVar6[1]) || (pcVar7 = pcVar6 + 2, cVar4 != pcVar6[2])) ||
               (pcVar7 = pcVar6 + 3, cVar4 != pcVar6[3])) ||
              ((pcVar7 = pcVar6 + 4, cVar4 != pcVar6[4] || (pcVar7 = pcVar6 + 5, cVar4 != pcVar6[5])
               ))) || ((pcVar7 = pcVar6 + 6, cVar4 != pcVar6[6] ||
                       ((pcVar7 = pcVar6 + 7, cVar4 != pcVar6[7] ||
                        (pcVar7 = pcVar6 + 8, cVar4 != pcVar6[8])))))) break;
          pcVar6 = pcVar7;
        } while (pcVar7 < pcVar13 + 0x102);
        uVar8 = ((int)pcVar7 - (int)(pcVar13 + 0x102)) + 0x102;
        if (uVar12 < uVar8) {
          uVar8 = uVar12;
        }
        *(uint *)(param_1 + 0x11) = uVar8;
      }
    }
    if (*(uint *)(param_1 + 0x11) < 3) {
      bVar9 = *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x94) + param_1[10]);
      *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 0;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar9;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 + (ulonglong)bVar9 * 4 + 0xbc);
      *psVar3 = *psVar3 + 1;
      bVar14 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + -1;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + 1;
    }
    else {
      bVar9 = (char)param_1[0x11] - 3;
      *(undefined2 *)(param_1[0x2df] + (ulonglong)*(uint *)((longlong)param_1 + 0x16f4) * 2) = 1;
      *(byte *)((ulonglong)*(uint *)((longlong)param_1 + 0x16f4) + param_1[0x2dd]) = bVar9;
      *(int *)((longlong)param_1 + 0x16f4) = *(int *)((longlong)param_1 + 0x16f4) + 1;
      psVar3 = (short *)((longlong)param_1 +
                        (longlong)(int)((byte)(&DAT_140e7e540)[bVar9] + 0x101) * 4 + 0xbc);
      *psVar3 = *psVar3 + 1;
      *(short *)(param_1 + 0x136) = (short)param_1[0x136] + 1;
      bVar14 = *(int *)((longlong)param_1 + 0x16f4) == (int)param_1[0x2de] + -1;
      lVar10 = param_1[0x11];
      *(undefined4 *)(param_1 + 0x11) = 0;
      *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) - (int)lVar10;
      *(int *)((longlong)param_1 + 0x94) = *(int *)((longlong)param_1 + 0x94) + (int)lVar10;
    }
    if (bVar14) {
      uVar12 = *(uint *)((longlong)param_1 + 0x84);
      lVar10 = lVar11;
      if (-1 < (int)uVar12) {
        lVar10 = (ulonglong)uVar12 + param_1[10];
      }
      FUN_140dfabf0(param_1,lVar10,*(int *)((longlong)param_1 + 0x94) - uVar12,0);
      lVar10 = *param_1;
      *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_1 + 0x94);
      uVar12 = *(uint *)(*(longlong *)(lVar10 + 0x28) + 0x28);
      if (*(uint *)(lVar10 + 0x18) < uVar12) {
        uVar12 = *(uint *)(lVar10 + 0x18);
      }
      if (uVar12 != 0) {
        memcpy(*(void **)(lVar10 + 0x10),*(void **)(*(longlong *)(lVar10 + 0x28) + 0x20),
               (ulonglong)uVar12);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + (ulonglong)uVar12;
        plVar1 = (longlong *)(*(longlong *)(lVar10 + 0x28) + 0x20);
        *plVar1 = *plVar1 + (ulonglong)uVar12;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + uVar12;
        *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) - uVar12;
        piVar2 = (int *)(*(longlong *)(lVar10 + 0x28) + 0x28);
        *piVar2 = *piVar2 - uVar12;
        lVar10 = *(longlong *)(lVar10 + 0x28);
        if (*(int *)(lVar10 + 0x28) == 0) {
          *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar10 + 0x10);
        }
      }
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
  } while( true );
}

