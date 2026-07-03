// FUN_1405b58c0 @ 1405b58c0
// callees:
//   -> 1405b06e0 FUN_1405b06e0
//   -> 140dfb5b4 free
//   -> 1405b0ab0 FUN_1405b0ab0
//   -> 1405b0870 FUN_1405b0870
//   -> EXTERNAL:000000e1 memmove
//   -> 1405b1590 FUN_1405b1590
//   -> 1405b1b10 FUN_1405b1b10
//   -> 1405b3340 FUN_1405b3340


void FUN_1405b58c0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *param_1;
  lVar5 = param_1[1] - lVar6;
  while (lVar5 >> 3 != 0) {
    pvVar3 = *(void **)(lVar6 + -8 + (lVar5 >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      FUN_1405b06e0(pvVar3);
      free(pvVar3);
    }
    lVar6 = *param_1;
    lVar5 = param_1[1] - lVar6;
  }
  lVar6 = param_1[4] - param_1[3];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[3] + -8 + (param_1[4] - param_1[3] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      FUN_1405b0ab0(pvVar3);
      free(pvVar3);
    }
    lVar6 = param_1[4] - param_1[3];
  }
  lVar6 = param_1[7] - param_1[6];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[6] + -8 + (param_1[7] - param_1[6] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      FUN_1405b0870(pvVar3);
      free(pvVar3);
    }
    lVar6 = param_1[7] - param_1[6];
  }
  lVar6 = param_1[10] - param_1[9];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[9] + -8 + (param_1[10] - param_1[9] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      iVar4 = (int)(DAT_141c534c0 - DAT_141c534b8 >> 3) + -1;
      if (-1 < iVar4) {
        lVar6 = (longlong)iVar4;
        do {
          if (*(void **)(DAT_141c534b8 + lVar6 * 8) == pvVar3) {
            pvVar2 = (void *)(DAT_141c534b8 + (longlong)iVar4 * 8);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,DAT_141c534c0 - (longlong)pvVar1);
            DAT_141c534c0 = DAT_141c534c0 + -8;
            break;
          }
          iVar4 = iVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      free(pvVar3);
    }
    lVar6 = param_1[10] - param_1[9];
  }
  lVar6 = param_1[0xd] - param_1[0xc];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[0xc] + -8 + (param_1[0xd] - param_1[0xc] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      FUN_1405b1590(pvVar3);
      free(pvVar3);
    }
    lVar6 = param_1[0xd] - param_1[0xc];
  }
  lVar6 = param_1[0x13] - param_1[0x12];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[0x12] + -8 + (param_1[0x13] - param_1[0x12] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      iVar4 = (int)(DAT_141c53508 - DAT_141c53500 >> 3) + -1;
      if (-1 < iVar4) {
        lVar6 = (longlong)iVar4;
        do {
          if (*(void **)(DAT_141c53500 + lVar6 * 8) == pvVar3) {
            pvVar2 = (void *)(DAT_141c53500 + (longlong)iVar4 * 8);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,DAT_141c53508 - (longlong)pvVar1);
            DAT_141c53508 = DAT_141c53508 + -8;
            break;
          }
          iVar4 = iVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      free(pvVar3);
    }
    lVar6 = param_1[0x13] - param_1[0x12];
  }
  lVar6 = param_1[0x16] - param_1[0x15];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[0x15] + -8 + (param_1[0x16] - param_1[0x15] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      iVar4 = (int)(DAT_141c53520 - DAT_141c53518 >> 3) + -1;
      if (-1 < iVar4) {
        lVar6 = (longlong)iVar4;
        do {
          if (*(void **)(DAT_141c53518 + lVar6 * 8) == pvVar3) {
            pvVar2 = (void *)(DAT_141c53518 + (longlong)iVar4 * 8);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,DAT_141c53520 - (longlong)pvVar1);
            DAT_141c53520 = DAT_141c53520 + -8;
            break;
          }
          iVar4 = iVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      free(pvVar3);
    }
    lVar6 = param_1[0x16] - param_1[0x15];
  }
  lVar6 = param_1[0x19] - param_1[0x18];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[0x18] + -8 + (param_1[0x19] - param_1[0x18] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      FUN_1405b1b10(pvVar3);
      free(pvVar3);
    }
    lVar6 = param_1[0x19] - param_1[0x18];
  }
  lVar6 = param_1[0x1c] - param_1[0x1b];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[0x1b] + -8 + (param_1[0x1c] - param_1[0x1b] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      iVar4 = (int)(DAT_141c53550 - DAT_141c53548 >> 3) + -1;
      if (-1 < iVar4) {
        lVar6 = (longlong)iVar4;
        do {
          if (*(void **)(DAT_141c53548 + lVar6 * 8) == pvVar3) {
            pvVar2 = (void *)(DAT_141c53548 + (longlong)iVar4 * 8);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,DAT_141c53550 - (longlong)pvVar1);
            DAT_141c53550 = DAT_141c53550 + -8;
            break;
          }
          iVar4 = iVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      free(pvVar3);
    }
    lVar6 = param_1[0x1c] - param_1[0x1b];
  }
  lVar6 = param_1[0x1f] - param_1[0x1e];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[0x1e] + -8 + (param_1[0x1f] - param_1[0x1e] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      FUN_1405b3340(pvVar3);
      free(pvVar3);
    }
    lVar6 = param_1[0x1f] - param_1[0x1e];
  }
  lVar6 = param_1[0x22] - param_1[0x21];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[0x21] + -8 + (param_1[0x22] - param_1[0x21] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      iVar4 = (int)(DAT_141c53580 - DAT_141c53578 >> 3) + -1;
      if (-1 < iVar4) {
        lVar6 = (longlong)iVar4;
        do {
          if (*(void **)(DAT_141c53578 + lVar6 * 8) == pvVar3) {
            pvVar2 = (void *)(DAT_141c53578 + (longlong)iVar4 * 8);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,DAT_141c53580 - (longlong)pvVar1);
            DAT_141c53580 = DAT_141c53580 + -8;
            break;
          }
          iVar4 = iVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      free(pvVar3);
    }
    lVar6 = param_1[0x22] - param_1[0x21];
  }
  lVar6 = param_1[0x28] - param_1[0x27];
  while (lVar6 >> 3 != 0) {
    pvVar3 = *(void **)(param_1[0x27] + -8 + (param_1[0x28] - param_1[0x27] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      iVar4 = (int)(DAT_141c535b0 - DAT_141c535a8 >> 3) + -1;
      if (-1 < iVar4) {
        lVar6 = (longlong)iVar4;
        do {
          if (*(void **)(DAT_141c535a8 + lVar6 * 8) == pvVar3) {
            pvVar2 = (void *)(DAT_141c535a8 + (longlong)iVar4 * 8);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,DAT_141c535b0 - (longlong)pvVar1);
            DAT_141c535b0 = DAT_141c535b0 + -8;
            break;
          }
          iVar4 = iVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      free(pvVar3);
    }
    lVar6 = param_1[0x28] - param_1[0x27];
  }
  lVar6 = param_1[0x2b] - param_1[0x2a];
  do {
    if (lVar6 >> 3 == 0) {
      iVar4 = (int)(param_1[0x25] - param_1[0x24] >> 3) + -1;
      lVar6 = (longlong)iVar4;
      if (-1 < iVar4) {
        do {
          pvVar3 = *(void **)(param_1[0x24] + lVar6 * 8);
          if (pvVar3 != (void *)0x0) {
            free(pvVar3);
          }
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      param_1[0x25] = param_1[0x24];
      return;
    }
    pvVar3 = *(void **)(param_1[0x2a] + -8 + (param_1[0x2b] - param_1[0x2a] >> 3) * 8);
    if (pvVar3 != (void *)0x0) {
      iVar4 = (int)(DAT_141c535c8 - DAT_141c535c0 >> 3) + -1;
      if (-1 < iVar4) {
        lVar6 = (longlong)iVar4;
        do {
          if (*(void **)(DAT_141c535c0 + lVar6 * 8) == pvVar3) {
            pvVar2 = (void *)(DAT_141c535c0 + (longlong)iVar4 * 8);
            pvVar1 = (void *)((longlong)pvVar2 + 8);
            memmove(pvVar2,pvVar1,DAT_141c535c8 - (longlong)pvVar1);
            DAT_141c535c8 = DAT_141c535c8 + -8;
            break;
          }
          iVar4 = iVar4 + -1;
          lVar6 = lVar6 + -1;
        } while (-1 < lVar6);
      }
      free(pvVar3);
    }
    lVar6 = param_1[0x2b] - param_1[0x2a];
  } while( true );
}

