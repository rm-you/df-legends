// FUN_140c2c690 @ 140c2c690
// callees:
//   -> 14000b9d0 FUN_14000b9d0
//   -> 1408271b0 FUN_1408271b0
//   -> 140dfb5c4 operator_new
//   -> 1407ef4f0 FUN_1407ef4f0
//   -> 1407ef780 FUN_1407ef780
//   -> 1407ef3d0 FUN_1407ef3d0
//   -> 140051300 FUN_140051300
//   -> 14015e1e0 FUN_14015e1e0
//   -> 140dfb5b4 free
//   -> EXTERNAL:000000e1 memmove
//   -> 140c241b0 FUN_140c241b0
//   -> 1407efc10 FUN_1407efc10
//   -> 140002020 FUN_140002020


void FUN_140c2c690(longlong param_1,longlong *param_2)

{
  byte bVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined2 *_Memory;
  longlong lVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  void *_Dst;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong local_68 [5];
  
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  FUN_14000b9d0(local_68,param_2[1] - *param_2 >> 3);
  iVar14 = (int)(*(longlong *)(param_1 + 0x598) - *(longlong *)(param_1 + 0x590) >> 3) + -1;
  if (-1 < iVar14) {
    lVar16 = (longlong)iVar14 * 8;
    lVar18 = lVar16;
    do {
      pvVar2 = *(void **)(lVar18 + *(longlong *)(param_1 + 0x590));
      iVar7 = (int)(param_2[1] - *param_2 >> 3) + -1;
      lVar13 = (longlong)iVar7;
      if (-1 < iVar7) {
        do {
          *(undefined8 *)(local_68[0] + lVar13 * 8) = 0;
          lVar13 = lVar13 + -1;
        } while (-1 < lVar13);
      }
      iVar7 = (int)(*(longlong *)((longlong)pvVar2 + 0x10) - *(longlong *)((longlong)pvVar2 + 8) >>
                   3) + -1;
      if (-1 < iVar7) {
        lVar13 = (longlong)iVar7 * 8;
        lVar19 = lVar13;
        do {
          lVar4 = local_68[0];
          lVar15 = *(longlong *)(*(longlong *)((longlong)pvVar2 + 8) + lVar19);
          if ((*(byte *)((longlong)pvVar2 + 0x2c) & 1) == 0) {
            sVar6 = *(short *)(lVar15 + 4);
          }
          else {
            sVar6 = *(short *)(*(longlong *)
                                (**(longlong **)(param_1 + 0x5d8) +
                                (longlong)*(short *)(lVar15 + 4) * 8) + 0x40);
          }
          if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + (longlong)sVar6 * 4) & 2) != 0) {
            iVar8 = (int)(param_2[1] - *param_2 >> 3) + -1;
            lVar15 = (longlong)iVar8;
            if (-1 < iVar8) {
              plVar17 = (longlong *)(local_68[0] + lVar15 * 8);
              do {
                puVar3 = *(undefined8 **)((*param_2 - lVar4) + (longlong)plVar17);
                if (*plVar17 == 0) {
                  sVar6 = (**(code **)*puVar3)(puVar3);
                  if ((sVar6 == 0x17) || (sVar6 = (**(code **)*puVar3)(puVar3), sVar6 == 0x2d)) {
                    lVar9 = FUN_1408271b0(puVar3);
                    *(undefined4 *)(lVar9 + 0x24) = *(undefined4 *)((longlong)pvVar2 + 0x24);
                    *(undefined4 *)(lVar9 + 0x28) = *(undefined4 *)((longlong)pvVar2 + 0x28);
                    *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)((longlong)pvVar2 + 0x20);
                    *(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)((longlong)pvVar2 + 0x2c);
                    *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)((longlong)pvVar2 + 0x3c);
                    *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)((longlong)pvVar2 + 0x48);
                    *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)((longlong)pvVar2 + 0x38);
                    *(undefined4 *)(lVar9 + 0x44) = *(undefined4 *)((longlong)pvVar2 + 0x44);
                    *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)((longlong)pvVar2 + 0x34);
                    *(undefined4 *)(lVar9 + 0x40) = *(undefined4 *)((longlong)pvVar2 + 0x40);
                    if (*(longlong *)((longlong)pvVar2 + 0x50) != 0) {
                      if (*(longlong *)(lVar9 + 0x50) == 0) {
                        pvVar10 = operator_new(0x118);
                        uVar11 = FUN_1407ef4f0(pvVar10);
                        *(undefined8 *)(lVar9 + 0x50) = uVar11;
                      }
                      FUN_1407ef780(*(undefined8 *)(lVar9 + 0x50),
                                    *(undefined8 *)((longlong)pvVar2 + 0x50));
                    }
                    *plVar17 = lVar9;
                  }
                  if (*plVar17 != 0) goto LAB_140c2c8a7;
                }
                else {
LAB_140c2c8a7:
                  puVar12 = operator_new(0xa8);
                  *(undefined8 *)(puVar12 + 6) = 0;
                  *(undefined8 *)(puVar12 + 8) = 0;
                  *(undefined8 *)(puVar12 + 10) = 0;
                  *(undefined8 *)(puVar12 + 0xc) = 0;
                  *(undefined8 *)(puVar12 + 0xe) = 0;
                  *(undefined8 *)(puVar12 + 0x10) = 0;
                  *(undefined8 *)(puVar12 + 0x12) = 0;
                  *(undefined8 *)(puVar12 + 0x14) = 0;
                  *(undefined8 *)(puVar12 + 0x16) = 0;
                  *puVar12 = 0xffffffff;
                  *(undefined2 *)(puVar12 + 1) = 0xffff;
                  *(undefined2 *)((longlong)puVar12 + 6) = 0xffff;
                  puVar12[2] = 1;
                  *(undefined2 *)(puVar12 + 3) = 0;
                  puVar12[4] = 0;
                  *(undefined8 *)(puVar12 + 0x19) = 0;
                  *(undefined2 *)(puVar12 + 0x18) = 0;
                  *(undefined8 *)(puVar12 + 0x1b) = 0;
                  *(undefined8 *)(puVar12 + 0x1d) = 0;
                  *(undefined8 *)(puVar12 + 0x1f) = 0;
                  *(undefined8 *)(puVar12 + 0x21) = 0;
                  *(undefined8 *)(puVar12 + 0x23) = 0;
                  *(undefined8 *)(puVar12 + 0x25) = 0;
                  puVar12[0x27] = 0xffffffff;
                  puVar12[0x28] = 0;
                  FUN_1407ef3d0(puVar12,*(undefined8 *)
                                         (*(longlong *)((longlong)pvVar2 + 8) + lVar19));
                  FUN_140051300(puVar12,*plVar17 + 8);
                }
                plVar17 = plVar17 + -1;
                lVar15 = lVar15 + -1;
              } while (-1 < lVar15);
            }
            pvVar10 = *(void **)(lVar19 + *(longlong *)((longlong)pvVar2 + 8));
            if (pvVar10 != (void *)0x0) {
              FUN_14015e1e0(pvVar10);
              free(pvVar10);
            }
            _Dst = (void *)(*(longlong *)((longlong)pvVar2 + 8) + lVar13);
            pvVar10 = (void *)((longlong)_Dst + 8);
            memmove(_Dst,pvVar10,*(longlong *)((longlong)pvVar2 + 0x10) - (longlong)pvVar10);
            *(longlong *)((longlong)pvVar2 + 0x10) = *(longlong *)((longlong)pvVar2 + 0x10) + -8;
            *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
          }
          iVar7 = iVar7 + -1;
          lVar13 = lVar13 + -8;
          lVar19 = lVar19 + -8;
        } while (-1 < iVar7);
      }
      if ((((((*(longlong *)((longlong)pvVar2 + 0x10) - *(longlong *)((longlong)pvVar2 + 8) >> 3 ==
               0) && (*(int *)((longlong)pvVar2 + 0x34) < 1)) &&
            (*(int *)((longlong)pvVar2 + 0x38) < 1)) &&
           ((*(int *)((longlong)pvVar2 + 0x3c) < 1 && (*(int *)((longlong)pvVar2 + 0x48) < 1)))) &&
          ((*(int *)((longlong)pvVar2 + 0x40) < 1 &&
           ((*(int *)((longlong)pvVar2 + 0x44) < 1 && (*(int *)((longlong)pvVar2 + 0x30) == -1))))))
         && ((*(longlong *)((longlong)pvVar2 + 0x50) == 0 ||
             (cVar5 = FUN_140c241b0(), cVar5 != '\0')))) {
        *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 8;
        *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) & 0xffffffcf;
        FUN_1407efc10(pvVar2);
        lVar13 = *(longlong *)((longlong)pvVar2 + 8);
        if (lVar13 != 0) {
          FUN_140002020(lVar13,*(longlong *)((longlong)pvVar2 + 0x18) - lVar13 >> 3,8);
          *(undefined8 *)((longlong)pvVar2 + 8) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x10) = 0;
          *(undefined8 *)((longlong)pvVar2 + 0x18) = 0;
        }
        free(pvVar2);
        pvVar10 = (void *)(*(longlong *)(param_1 + 0x590) + lVar16);
        pvVar2 = (void *)((longlong)pvVar10 + 8);
        memmove(pvVar10,pvVar2,*(longlong *)(param_1 + 0x598) - (longlong)pvVar2);
        *(longlong *)(param_1 + 0x598) = *(longlong *)(param_1 + 0x598) + -8;
      }
      iVar14 = iVar14 + -1;
      lVar16 = lVar16 + -8;
      lVar18 = lVar18 + -8;
    } while (-1 < iVar14);
  }
  iVar14 = (int)(*(longlong *)(param_1 + 0x6b8) - *(longlong *)(param_1 + 0x6b0) >> 3) + -1;
  if (-1 < iVar14) {
    lVar16 = (longlong)iVar14 * 8;
    lVar18 = lVar16;
    do {
      _Memory = *(undefined2 **)(lVar18 + *(longlong *)(param_1 + 0x6b0));
      if (_Memory[0xc] == -1) {
        if (1 < *(int *)(_Memory + 8)) {
          iVar8 = *(int *)(_Memory + 8) + -1;
          bVar1 = *(byte *)(_Memory + 0xd);
          iVar7 = (int)(param_2[1] - *param_2 >> 3) + -1;
          lVar13 = (longlong)iVar7;
          if (-1 < iVar7) {
            do {
              plVar17 = *(longlong **)(*param_2 + lVar13 * 8);
              (**(code **)(*plVar17 + 0x3f8))
                        (plVar17,*_Memory,*(undefined4 *)(_Memory + 2),_Memory[4],_Memory[5],iVar8,
                         0xffff,(bVar1 & 1) != 0);
              lVar13 = lVar13 + -1;
            } while (-1 < lVar13);
          }
          *(int *)(_Memory + 8) = *(int *)(_Memory + 8) - iVar8;
        }
      }
      else if ((*(byte *)(*(longlong *)(param_1 + 0x4d0) + (longlong)(short)_Memory[0xc] * 4) & 2)
               != 0) {
        bVar1 = *(byte *)(_Memory + 0xd);
        iVar7 = (int)(param_2[1] - *param_2 >> 3) + -1;
        lVar13 = (longlong)iVar7;
        if (-1 < iVar7) {
          do {
            plVar17 = *(longlong **)(*param_2 + lVar13 * 8);
            (**(code **)(*plVar17 + 0x3f8))
                      (plVar17,*_Memory,*(undefined4 *)(_Memory + 2),_Memory[4],_Memory[5],
                       *(undefined4 *)(_Memory + 8),_Memory[0xc],(bVar1 & 1) != 0);
            lVar13 = lVar13 + -1;
          } while (-1 < lVar13);
        }
        free(_Memory);
        pvVar10 = (void *)(*(longlong *)(param_1 + 0x6b0) + lVar16);
        pvVar2 = (void *)((longlong)pvVar10 + 8);
        memmove(pvVar10,pvVar2,*(longlong *)(param_1 + 0x6b8) - (longlong)pvVar2);
        *(longlong *)(param_1 + 0x6b8) = *(longlong *)(param_1 + 0x6b8) + -8;
      }
      iVar14 = iVar14 + -1;
      lVar16 = lVar16 + -8;
      lVar18 = lVar18 + -8;
    } while (-1 < iVar14);
  }
  if (local_68[0] != 0) {
    FUN_140002020(local_68[0],local_68[2] - local_68[0] >> 3,8);
  }
  return;
}

