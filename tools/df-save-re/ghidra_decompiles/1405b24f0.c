// FUN_1405b24f0 @ 1405b24f0
// callees:
//   -> 1405b06e0 FUN_1405b06e0
//   -> 140dfb5b4 free
//   -> 1405b0ab0 FUN_1405b0ab0
//   -> 1405b0870 FUN_1405b0870
//   -> EXTERNAL:000000e1 memmove
//   -> 1405b0560 FUN_1405b0560
//   -> 1405b1590 FUN_1405b1590
//   -> 1405b3340 FUN_1405b3340
//   -> 1405b1b10 FUN_1405b1b10


void FUN_1405b24f0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  void *pvVar6;
  longlong *_Memory;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  short *psVar13;
  
  iVar7 = (int)(param_1[1] - *param_1 >> 3) + -1;
  lVar11 = (longlong)iVar7;
  lVar10 = DAT_141d69520;
  if (-1 < iVar7) {
    do {
      pvVar6 = *(void **)(*param_1 + lVar11 * 8);
      sVar3 = *(short *)((longlong)pvVar6 + 0x20);
      sVar4 = *(short *)((longlong)pvVar6 + 0x24);
      sVar5 = *(short *)((longlong)pvVar6 + 0x22);
      if (((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
          (((DAT_141d69558 <= sVar5 || (sVar4 < 0)) ||
           ((DAT_141d6955c <= sVar4 ||
            ((lVar10 == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
               (longlong)sVar4 * 8) == 0)))))))) && (pvVar6 != (void *)0x0)) {
        FUN_1405b06e0(pvVar6);
        free(pvVar6);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[4] - param_1[3] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      pvVar6 = *(void **)(param_1[3] + lVar11 * 8);
      if ((*(longlong *)((longlong)pvVar6 + 0x10) - *(longlong *)((longlong)pvVar6 + 8) &
          0xfffffffffffffffeU) == 0) {
LAB_1405b2678:
        if (pvVar6 != (void *)0x0) {
          FUN_1405b0ab0(pvVar6);
          free(pvVar6);
          lVar10 = DAT_141d69520;
        }
      }
      else {
        sVar3 = **(short **)((longlong)pvVar6 + 0x38);
        sVar4 = **(short **)((longlong)pvVar6 + 0x20);
        sVar5 = **(short **)((longlong)pvVar6 + 8);
        if (((((sVar5 < 0) || (DAT_141d69554 <= sVar5)) || (sVar4 < 0)) ||
            ((DAT_141d69558 <= sVar4 || (sVar3 < 0)))) ||
           ((DAT_141d6955c <= sVar3 ||
            ((lVar10 == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(lVar10 + ((longlong)sVar5 >> 4) * 8) + ((longlong)sVar4 >> 4) * 8) +
               (longlong)sVar3 * 8) == 0)))))) goto LAB_1405b2678;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[7] - param_1[6] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      pvVar6 = *(void **)(param_1[6] + lVar11 * 8);
      sVar3 = *(short *)((longlong)pvVar6 + 0x60);
      sVar4 = *(short *)((longlong)pvVar6 + 100);
      sVar5 = *(short *)((longlong)pvVar6 + 0x62);
      if ((((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
           ((DAT_141d69558 <= sVar5 || (sVar4 < 0)))) ||
          ((DAT_141d6955c <= sVar4 ||
           ((lVar10 == 0 ||
            (*(longlong *)
              (*(longlong *)
                (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
              (longlong)sVar4 * 8) == 0)))))) && (pvVar6 != (void *)0x0)) {
        FUN_1405b0870(pvVar6);
        free(pvVar6);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[10] - param_1[9] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      pvVar6 = *(void **)(param_1[9] + lVar11 * 8);
      sVar3 = *(short *)((longlong)pvVar6 + 0xc);
      sVar4 = *(short *)((longlong)pvVar6 + 0x10);
      sVar5 = *(short *)((longlong)pvVar6 + 0xe);
      if (((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
          (((DAT_141d69558 <= sVar5 || (sVar4 < 0)) ||
           ((DAT_141d6955c <= sVar4 ||
            ((lVar10 == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
               (longlong)sVar4 * 8) == 0)))))))) && (pvVar6 != (void *)0x0)) {
        iVar7 = (int)(DAT_141c534c0 - DAT_141c534b8 >> 3) + -1;
        if (-1 < iVar7) {
          lVar10 = (longlong)iVar7;
          do {
            if (*(void **)(DAT_141c534b8 + lVar10 * 8) == pvVar6) {
              pvVar2 = (void *)(DAT_141c534b8 + (longlong)iVar7 * 8);
              pvVar1 = (void *)((longlong)pvVar2 + 8);
              memmove(pvVar2,pvVar1,DAT_141c534c0 - (longlong)pvVar1);
              DAT_141c534c0 = DAT_141c534c0 + -8;
              break;
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        free(pvVar6);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x25] - param_1[0x24] >> 3) + -1;
  if (-1 < iVar7) {
    lVar11 = (longlong)iVar7 * 8;
    lVar12 = lVar11;
    do {
      psVar13 = *(short **)(lVar12 + param_1[0x24]);
      sVar3 = *psVar13;
      sVar4 = psVar13[2];
      sVar5 = psVar13[1];
      if (((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
          ((DAT_141d69558 <= sVar5 || (sVar4 < 0)))) ||
         ((DAT_141d6955c <= sVar4 ||
          ((lVar10 == 0 ||
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
             (longlong)sVar4 * 8) == 0)))))) {
        if (psVar13 != (short *)0x0) {
          free(psVar13);
        }
        pvVar6 = (void *)(param_1[0x24] + lVar11 + 8);
        memmove((void *)(param_1[0x24] + lVar11),pvVar6,param_1[0x25] - (longlong)pvVar6);
        param_1[0x25] = param_1[0x25] + -8;
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -8;
      lVar12 = lVar12 + -8;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  iVar7 = (int)(param_1[0xd] - param_1[0xc] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      lVar12 = *(longlong *)(param_1[0xc] + lVar11 * 8);
      sVar3 = *(short *)(lVar12 + 4);
      sVar4 = *(short *)(lVar12 + 8);
      sVar5 = *(short *)(lVar12 + 6);
      if ((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
         (((DAT_141d69558 <= sVar5 || (sVar4 < 0)) ||
          ((DAT_141d6955c <= sVar4 ||
           ((lVar10 == 0 ||
            (*(longlong *)
              (*(longlong *)
                (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
              (longlong)sVar4 * 8) == 0)))))))) {
        lVar8 = FUN_1405b0560(&DAT_141c536c8,lVar12 + 0x20);
        if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != 0x989681)) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + *(int *)(lVar12 + 0x1c);
          uVar9 = *(uint *)(lVar8 + 4);
          if (10000000 < uVar9) {
            uVar9 = 10000000;
          }
          *(uint *)(lVar8 + 4) = uVar9;
          lVar10 = DAT_141d69520;
        }
        pvVar6 = *(void **)(param_1[0xc] + lVar11 * 8);
        if (pvVar6 != (void *)0x0) {
          FUN_1405b1590(pvVar6);
          free(pvVar6);
          lVar10 = DAT_141d69520;
        }
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x13] - param_1[0x12] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      psVar13 = *(short **)(param_1[0x12] + lVar11 * 8);
      sVar3 = *psVar13;
      sVar4 = psVar13[2];
      sVar5 = psVar13[1];
      if (((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
          (((DAT_141d69558 <= sVar5 || (sVar4 < 0)) ||
           ((DAT_141d6955c <= sVar4 ||
            ((lVar10 == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
               (longlong)sVar4 * 8) == 0)))))))) && (psVar13 != (short *)0x0)) {
        iVar7 = (int)(DAT_141c53508 - DAT_141c53500 >> 3) + -1;
        if (-1 < iVar7) {
          lVar10 = (longlong)iVar7;
          do {
            if (*(short **)(DAT_141c53500 + lVar10 * 8) == psVar13) {
              pvVar1 = (void *)(DAT_141c53500 + (longlong)iVar7 * 8);
              pvVar6 = (void *)((longlong)pvVar1 + 8);
              memmove(pvVar1,pvVar6,DAT_141c53508 - (longlong)pvVar6);
              DAT_141c53508 = DAT_141c53508 + -8;
              break;
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        free(psVar13);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x1f] - param_1[0x1e] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      psVar13 = *(short **)(param_1[0x1e] + lVar11 * 8);
      sVar3 = *psVar13;
      sVar4 = psVar13[2];
      sVar5 = psVar13[1];
      if (((((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
            ((DAT_141d69558 <= sVar5 || (sVar4 < 0)))) || (DAT_141d6955c <= sVar4)) ||
          ((lVar10 == 0 ||
           (*(longlong *)
             (*(longlong *)
               (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
             (longlong)sVar4 * 8) == 0)))) && (psVar13 != (short *)0x0)) {
        FUN_1405b3340(psVar13);
        free(psVar13);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x22] - param_1[0x21] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      psVar13 = *(short **)(param_1[0x21] + lVar11 * 8);
      sVar3 = *psVar13;
      sVar4 = psVar13[4];
      sVar5 = psVar13[1];
      if ((((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
           ((DAT_141d69558 <= sVar5 || (sVar4 < 0)))) ||
          ((DAT_141d6955c <= sVar4 ||
           ((lVar10 == 0 ||
            (*(longlong *)
              (*(longlong *)
                (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
              (longlong)sVar4 * 8) == 0)))))) && (psVar13 != (short *)0x0)) {
        iVar7 = (int)(DAT_141c53580 - DAT_141c53578 >> 3) + -1;
        if (-1 < iVar7) {
          lVar10 = (longlong)iVar7;
          do {
            if (*(short **)(DAT_141c53578 + lVar10 * 8) == psVar13) {
              pvVar1 = (void *)(DAT_141c53578 + (longlong)iVar7 * 8);
              pvVar6 = (void *)((longlong)pvVar1 + 8);
              memmove(pvVar1,pvVar6,DAT_141c53580 - (longlong)pvVar6);
              DAT_141c53580 = DAT_141c53580 + -8;
              break;
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        free(psVar13);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x16] - param_1[0x15] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      psVar13 = *(short **)(param_1[0x15] + lVar11 * 8);
      sVar3 = *psVar13;
      sVar4 = psVar13[2];
      sVar5 = psVar13[1];
      if (((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
          (((DAT_141d69558 <= sVar5 || (sVar4 < 0)) ||
           ((DAT_141d6955c <= sVar4 ||
            ((lVar10 == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
               (longlong)sVar4 * 8) == 0)))))))) && (psVar13 != (short *)0x0)) {
        iVar7 = (int)(DAT_141c53520 - DAT_141c53518 >> 3) + -1;
        if (-1 < iVar7) {
          lVar10 = (longlong)iVar7;
          do {
            if (*(short **)(DAT_141c53518 + lVar10 * 8) == psVar13) {
              pvVar1 = (void *)(DAT_141c53518 + (longlong)iVar7 * 8);
              pvVar6 = (void *)((longlong)pvVar1 + 8);
              memmove(pvVar1,pvVar6,DAT_141c53520 - (longlong)pvVar6);
              DAT_141c53520 = DAT_141c53520 + -8;
              break;
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        free(psVar13);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x19] - param_1[0x18] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      iVar7 = 0;
      _Memory = *(longlong **)(param_1[0x18] + lVar11 * 8);
      if (_Memory[1] - *_Memory >> 1 != 0) {
        psVar13 = (short *)*_Memory;
        sVar3 = (short)_Memory[6];
        lVar12 = _Memory[3] - (longlong)psVar13;
        do {
          sVar4 = *psVar13;
          sVar5 = *(short *)(lVar12 + (longlong)psVar13);
          if (((((sVar4 < 0) || (DAT_141d69554 <= sVar4)) || (sVar5 < 0)) ||
              ((DAT_141d69558 <= sVar5 || (sVar3 < 0)))) ||
             ((DAT_141d6955c <= sVar3 ||
              ((lVar10 == 0 ||
               (*(longlong *)
                 (*(longlong *)
                   (*(longlong *)(lVar10 + ((longlong)sVar4 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8)
                 + (longlong)sVar3 * 8) == 0)))))) {
            if (_Memory != (longlong *)0x0) {
              FUN_1405b1b10(_Memory);
              free(_Memory);
              lVar10 = DAT_141d69520;
            }
            break;
          }
          iVar7 = iVar7 + 1;
          psVar13 = psVar13 + 1;
        } while ((ulonglong)(longlong)iVar7 < (ulonglong)(_Memory[1] - *_Memory >> 1));
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x1c] - param_1[0x1b] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      psVar13 = *(short **)(param_1[0x1b] + lVar11 * 8);
      sVar3 = *psVar13;
      sVar4 = psVar13[2];
      sVar5 = psVar13[1];
      if (((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
          (((DAT_141d69558 <= sVar5 || (sVar4 < 0)) ||
           ((DAT_141d6955c <= sVar4 ||
            ((lVar10 == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
               (longlong)sVar4 * 8) == 0)))))))) && (psVar13 != (short *)0x0)) {
        iVar7 = (int)(DAT_141c53550 - DAT_141c53548 >> 3) + -1;
        if (-1 < iVar7) {
          lVar10 = (longlong)iVar7;
          do {
            if (*(short **)(DAT_141c53548 + lVar10 * 8) == psVar13) {
              pvVar1 = (void *)(DAT_141c53548 + (longlong)iVar7 * 8);
              pvVar6 = (void *)((longlong)pvVar1 + 8);
              memmove(pvVar1,pvVar6,DAT_141c53550 - (longlong)pvVar6);
              DAT_141c53550 = DAT_141c53550 + -8;
              break;
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        free(psVar13);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x28] - param_1[0x27] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      psVar13 = *(short **)(param_1[0x27] + lVar11 * 8);
      sVar3 = *psVar13;
      sVar4 = psVar13[4];
      sVar5 = psVar13[1];
      if (((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar5 < 0)) ||
          (((DAT_141d69558 <= sVar5 || (sVar4 < 0)) ||
           ((DAT_141d6955c <= sVar4 ||
            ((lVar10 == 0 ||
             (*(longlong *)
               (*(longlong *)
                 (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar5 >> 4) * 8) +
               (longlong)sVar4 * 8) == 0)))))))) && (psVar13 != (short *)0x0)) {
        iVar7 = (int)(DAT_141c535b0 - DAT_141c535a8 >> 3) + -1;
        if (-1 < iVar7) {
          lVar10 = (longlong)iVar7;
          do {
            if (*(short **)(DAT_141c535a8 + lVar10 * 8) == psVar13) {
              pvVar1 = (void *)(DAT_141c535a8 + (longlong)iVar7 * 8);
              pvVar6 = (void *)((longlong)pvVar1 + 8);
              memmove(pvVar1,pvVar6,DAT_141c535b0 - (longlong)pvVar6);
              DAT_141c535b0 = DAT_141c535b0 + -8;
              break;
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        free(psVar13);
        lVar10 = DAT_141d69520;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  iVar7 = (int)(param_1[0x2b] - param_1[0x2a] >> 3) + -1;
  lVar11 = (longlong)iVar7;
  lVar10 = DAT_141d69540;
  if (-1 < iVar7) {
    do {
      pvVar6 = *(void **)(param_1[0x2a] + lVar11 * 8);
      sVar3 = *(short *)((longlong)pvVar6 + 0x16);
      sVar4 = *(short *)((longlong)pvVar6 + 0x18);
      if ((((((sVar3 < 0) || (DAT_141d69554 <= sVar3)) || (sVar4 < 0)) ||
           ((DAT_141d69558 <= sVar4 || (lVar10 == 0)))) ||
          (*(longlong *)
            (*(longlong *)(lVar10 + ((longlong)sVar3 >> 4) * 8) + ((longlong)sVar4 >> 4) * 8) == 0))
         && (pvVar6 != (void *)0x0)) {
        iVar7 = (int)(DAT_141c535c8 - DAT_141c535c0 >> 3) + -1;
        if (-1 < iVar7) {
          lVar10 = (longlong)iVar7;
          do {
            if (*(void **)(DAT_141c535c0 + lVar10 * 8) == pvVar6) {
              pvVar2 = (void *)(DAT_141c535c0 + (longlong)iVar7 * 8);
              pvVar1 = (void *)((longlong)pvVar2 + 8);
              memmove(pvVar2,pvVar1,DAT_141c535c8 - (longlong)pvVar1);
              DAT_141c535c8 = DAT_141c535c8 + -8;
              break;
            }
            iVar7 = iVar7 + -1;
            lVar10 = lVar10 + -1;
          } while (-1 < lVar10);
        }
        free(pvVar6);
        lVar10 = DAT_141d69540;
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
  }
  return;
}

