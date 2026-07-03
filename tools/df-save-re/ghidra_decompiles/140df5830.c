// FUN_140df5830 @ 140df5830
// callees:
//   -> 140df51b0 FUN_140df51b0
//   -> 140df57b0 FUN_140df57b0
//   -> 140df74b0 FUN_140df74b0
//   -> 140df7140 FUN_140df7140
//   -> 140dfab50 FUN_140dfab50


uint FUN_140df5830(longlong *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  
  if ((param_1 == (longlong *)0x0) ||
     (puVar5 = (undefined8 *)param_1[5], puVar5 == (undefined8 *)0x0)) {
    return 0xfffffffe;
  }
  if (((param_1[2] == 0) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) ||
     ((*(int *)(puVar5 + 1) == 0x29a && (param_2 != 4)))) {
    param_1[4] = (longlong)PTR_s_stream_error_140e7edd0;
    return 0xfffffffe;
  }
  if ((int)param_1[3] == 0) {
    param_1[4] = (longlong)PTR_s_buffer_error_140e7ede8;
    return 0xfffffffb;
  }
  iVar3 = *(int *)(puVar5 + 8);
  *puVar5 = param_1;
  *(int *)(puVar5 + 8) = param_2;
  iVar9 = 0;
  if (*(int *)(puVar5 + 1) == 0x2a) {
    if (*(int *)((longlong)puVar5 + 0x2c) == 2) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0x1f;
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0x8b;
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 8;
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      piVar6 = (int *)puVar5[6];
      uVar14 = 0;
      if (piVar6 == (int *)0x0) {
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        if (*(int *)((longlong)puVar5 + 0xac) == 9) {
          iVar8 = 2;
        }
        else if ((1 < *(int *)(puVar5 + 0x16)) ||
                (iVar8 = iVar9, *(int *)((longlong)puVar5 + 0xac) < 2)) {
          iVar8 = 4;
        }
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)iVar8;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = 0xb;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined4 *)(puVar5 + 1) = 0x71;
      }
      else {
        *(byte *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             (-(*(longlong *)(piVar6 + 0xc) != 0) & 0x10U) + (-(piVar6[0xf] != 0) & 2U) +
             (-(*(longlong *)(piVar6 + 8) != 0) & 8U) + (-(*(longlong *)(piVar6 + 4) != 0) & 4U) +
             (*piVar6 != 0);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 4);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 5);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 6);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 7);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        if (*(int *)((longlong)puVar5 + 0xac) == 9) {
          uVar14 = 2;
        }
        else if ((1 < *(int *)(puVar5 + 0x16)) || (*(int *)((longlong)puVar5 + 0xac) < 2)) {
          uVar14 = 4;
        }
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = uVar14;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
             *(undefined1 *)(puVar5[6] + 0xc);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        uVar15 = (ulonglong)*(uint *)(puVar5 + 5);
        if (*(longlong *)(puVar5[6] + 0x10) != 0) {
          *(undefined1 *)(uVar15 + puVar5[2]) = *(undefined1 *)(puVar5[6] + 0x18);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)(puVar5[6] + 0x19);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          uVar15 = (ulonglong)*(uint *)(puVar5 + 5);
        }
        if (*(int *)(puVar5[6] + 0x3c) != 0) {
          if (puVar5[2] == 0) {
            *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
            *(undefined4 *)(puVar5 + 7) = 0;
            *(undefined4 *)(puVar5 + 1) = 0x45;
            goto LAB_140df5bd8;
          }
          uVar11 = FUN_140df51b0(*(undefined4 *)((longlong)param_1 + 0x4c),puVar5[2],uVar15);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar11;
        }
        *(undefined4 *)(puVar5 + 7) = 0;
        *(undefined4 *)(puVar5 + 1) = 0x45;
      }
    }
    else {
      iVar8 = iVar9;
      if ((*(int *)(puVar5 + 0x16) < 2) && (iVar4 = *(int *)((longlong)puVar5 + 0xac), 1 < iVar4)) {
        if (iVar4 < 6) {
          iVar8 = 1;
        }
        else {
          iVar8 = (iVar4 != 6) + 2;
        }
      }
      uVar12 = (*(int *)(puVar5 + 9) + -8) * 0x1000 + 0x800U | iVar8 << 6;
      if (*(int *)((longlong)puVar5 + 0x94) != 0) {
        uVar12 = uVar12 | 0x20;
      }
      *(undefined4 *)(puVar5 + 1) = 0x71;
      iVar8 = (uVar12 / 0x1f + 1) * 0x1f;
      *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((uint)iVar8 >> 8);
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)iVar8;
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      if (*(int *)((longlong)puVar5 + 0x94) != 0) {
        uVar2 = *(undefined2 *)((longlong)param_1 + 0x4e);
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((ushort)uVar2 >> 8);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)uVar2;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        uVar2 = *(undefined2 *)((longlong)param_1 + 0x4c);
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((ushort)uVar2 >> 8);
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)uVar2;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
    }
  }
LAB_140df5bd8:
  if (*(int *)(puVar5 + 1) == 0x45) {
    if (*(longlong *)(puVar5[6] + 0x10) != 0) {
      uVar12 = *(uint *)(puVar5 + 5);
      if (*(uint *)(puVar5 + 7) < (uint)*(ushort *)(puVar5[6] + 0x18)) {
        do {
          uVar13 = *(uint *)(puVar5 + 5);
          if (uVar13 == *(uint *)(puVar5 + 3)) {
            if ((*(int *)(puVar5[6] + 0x3c) != 0) && (uVar12 < uVar13)) {
              iVar8 = iVar9;
              if ((ulonglong)uVar12 + puVar5[2] != 0) {
                iVar8 = FUN_140df51b0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                      (ulonglong)uVar12 + puVar5[2],uVar13 - uVar12);
              }
              *(int *)((longlong)param_1 + 0x4c) = iVar8;
            }
            FUN_140df57b0(param_1);
            uVar12 = *(uint *)(puVar5 + 5);
            uVar13 = uVar12;
            if (uVar12 == *(uint *)(puVar5 + 3)) break;
          }
          *(undefined1 *)((ulonglong)uVar13 + puVar5[2]) =
               *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 7) + *(longlong *)(puVar5[6] + 0x10));
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(int *)(puVar5 + 7) = *(int *)(puVar5 + 7) + 1;
        } while (*(uint *)(puVar5 + 7) < (uint)*(ushort *)(puVar5[6] + 0x18));
      }
      if ((*(int *)(puVar5[6] + 0x3c) != 0) && (uVar12 < *(uint *)(puVar5 + 5))) {
        if ((ulonglong)uVar12 + puVar5[2] != 0) {
          iVar9 = FUN_140df51b0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                (ulonglong)uVar12 + puVar5[2],*(uint *)(puVar5 + 5) - uVar12);
        }
        *(int *)((longlong)param_1 + 0x4c) = iVar9;
      }
      if (*(int *)(puVar5 + 7) != *(int *)(puVar5[6] + 0x18)) goto LAB_140df5cb9;
      *(undefined4 *)(puVar5 + 7) = 0;
    }
    *(undefined4 *)(puVar5 + 1) = 0x49;
  }
LAB_140df5cb9:
  uVar11 = 0;
  if (*(int *)(puVar5 + 1) == 0x49) {
    if (*(longlong *)(puVar5[6] + 0x20) != 0) {
      uVar15 = (ulonglong)*(uint *)(puVar5 + 5);
      do {
        uVar12 = *(uint *)(puVar5 + 5);
        if (uVar12 == *(uint *)(puVar5 + 3)) {
          if ((*(int *)(puVar5[6] + 0x3c) != 0) && ((uint)uVar15 < uVar12)) {
            uVar10 = uVar11;
            if (uVar15 + puVar5[2] != 0) {
              uVar10 = FUN_140df51b0(*(undefined4 *)((longlong)param_1 + 0x4c),uVar15 + puVar5[2],
                                     uVar12 - (uint)uVar15);
            }
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar10;
          }
          FUN_140df57b0(param_1);
          uVar12 = *(uint *)(puVar5 + 5);
          uVar15 = (ulonglong)uVar12;
          if (uVar12 == *(uint *)(puVar5 + 3)) {
            bVar7 = true;
            goto LAB_140df5d57;
          }
        }
        cVar1 = *(char *)(*(longlong *)(puVar5[6] + 0x20) + (ulonglong)*(uint *)(puVar5 + 7));
        *(uint *)(puVar5 + 7) = *(uint *)(puVar5 + 7) + 1;
        *(char *)((ulonglong)uVar12 + puVar5[2]) = cVar1;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      } while (cVar1 != '\0');
      bVar7 = false;
LAB_140df5d57:
      if (*(int *)(puVar5[6] + 0x3c) != 0) {
        if ((uint)uVar15 < *(uint *)(puVar5 + 5)) {
          uVar10 = uVar11;
          if (uVar15 + puVar5[2] != 0) {
            uVar10 = FUN_140df51b0(*(undefined4 *)((longlong)param_1 + 0x4c),uVar15 + puVar5[2],
                                   *(uint *)(puVar5 + 5) - (uint)uVar15);
          }
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar10;
        }
      }
      if (bVar7) goto LAB_140df5d94;
      *(undefined4 *)(puVar5 + 7) = 0;
    }
    *(undefined4 *)(puVar5 + 1) = 0x5b;
  }
LAB_140df5d94:
  if (*(int *)(puVar5 + 1) == 0x5b) {
    if (*(longlong *)(puVar5[6] + 0x30) != 0) {
      uVar15 = (ulonglong)*(uint *)(puVar5 + 5);
      do {
        uVar12 = *(uint *)(puVar5 + 5);
        if (uVar12 == *(uint *)(puVar5 + 3)) {
          if ((*(int *)(puVar5[6] + 0x3c) != 0) && ((uint)uVar15 < uVar12)) {
            uVar10 = uVar11;
            if (uVar15 + puVar5[2] != 0) {
              uVar10 = FUN_140df51b0(*(undefined4 *)((longlong)param_1 + 0x4c),uVar15 + puVar5[2],
                                     uVar12 - (uint)uVar15);
            }
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar10;
          }
          FUN_140df57b0(param_1);
          uVar12 = *(uint *)(puVar5 + 5);
          uVar15 = (ulonglong)uVar12;
          if (uVar12 == *(uint *)(puVar5 + 3)) {
            bVar7 = true;
            goto LAB_140df5e27;
          }
        }
        cVar1 = *(char *)(*(longlong *)(puVar5[6] + 0x30) + (ulonglong)*(uint *)(puVar5 + 7));
        *(uint *)(puVar5 + 7) = *(uint *)(puVar5 + 7) + 1;
        *(char *)((ulonglong)uVar12 + puVar5[2]) = cVar1;
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      } while (cVar1 != '\0');
      bVar7 = false;
LAB_140df5e27:
      if (*(int *)(puVar5[6] + 0x3c) != 0) {
        if ((uint)uVar15 < *(uint *)(puVar5 + 5)) {
          if (uVar15 + puVar5[2] != 0) {
            uVar11 = FUN_140df51b0(*(undefined4 *)((longlong)param_1 + 0x4c),uVar15 + puVar5[2],
                                   *(uint *)(puVar5 + 5) - (uint)uVar15);
          }
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar11;
        }
      }
      if (bVar7) goto LAB_140df5e61;
    }
    *(undefined4 *)(puVar5 + 1) = 0x67;
  }
LAB_140df5e61:
  if (*(int *)(puVar5 + 1) == 0x67) {
    if (*(int *)(puVar5[6] + 0x3c) != 0) {
      if (*(uint *)(puVar5 + 3) < *(int *)(puVar5 + 5) + 2U) {
        FUN_140df57b0(param_1);
      }
      if (*(uint *)(puVar5 + 3) < *(uint *)(puVar5 + 5) + 2) goto LAB_140df5ebe;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
           *(undefined1 *)((longlong)param_1 + 0x4c);
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
           *(undefined1 *)((longlong)param_1 + 0x4d);
      *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    *(undefined4 *)(puVar5 + 1) = 0x71;
  }
LAB_140df5ebe:
  if (*(int *)(puVar5 + 5) == 0) {
    if ((((int)param_1[1] == 0) && (param_2 <= iVar3)) && (param_2 != 4)) goto LAB_140df5f0b;
LAB_140df5efc:
    if (*(int *)(puVar5 + 1) == 0x29a) {
      if ((int)param_1[1] != 0) {
LAB_140df5f0b:
        param_1[4] = (longlong)PTR_s_buffer_error_140e7ede8;
        return 0xfffffffb;
      }
LAB_140df5f22:
      if ((*(int *)((longlong)puVar5 + 0x9c) != 0) ||
         ((param_2 != 0 && (*(int *)(puVar5 + 1) != 0x29a)))) goto LAB_140df5f3a;
    }
    else {
      if ((int)param_1[1] == 0) goto LAB_140df5f22;
LAB_140df5f3a:
      if (*(int *)(puVar5 + 0x16) == 2) {
        uVar12 = FUN_140df74b0();
      }
      else if (*(int *)(puVar5 + 0x16) == 3) {
        uVar12 = FUN_140df7140();
      }
      else {
        uVar12 = (*(code *)(&PTR_FUN_140e7d078)[(longlong)*(int *)((longlong)puVar5 + 0xac) * 2])
                           (puVar5,param_2);
      }
      if (uVar12 - 2 < 2) {
        *(undefined4 *)(puVar5 + 1) = 0x29a;
      }
      if ((uVar12 & 0xfffffffd) == 0) {
        if ((int)param_1[3] != 0) {
          return 0;
        }
        goto LAB_140df5ed0;
      }
      if (uVar12 == 1) {
        FUN_140dfab50(puVar5,0,0,0);
        FUN_140df57b0(param_1);
        if ((int)param_1[3] == 0) goto LAB_140df5ed0;
      }
    }
    if (param_2 == 4) {
      if (0 < *(int *)((longlong)puVar5 + 0x2c)) {
        if (*(int *)((longlong)puVar5 + 0x2c) == 2) {
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0x4c);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0x4d);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0x4e);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0x4f);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0xc);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0xd);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0xe);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(undefined1 *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) =
               *(undefined1 *)((longlong)param_1 + 0xf);
        }
        else {
          uVar2 = *(undefined2 *)((longlong)param_1 + 0x4e);
          *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((ushort)uVar2 >> 8);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)uVar2;
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          uVar2 = *(undefined2 *)((longlong)param_1 + 0x4c);
          *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)((ushort)uVar2 >> 8);
          *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
          *(char *)((ulonglong)*(uint *)(puVar5 + 5) + puVar5[2]) = (char)uVar2;
        }
        *(int *)(puVar5 + 5) = *(int *)(puVar5 + 5) + 1;
        FUN_140df57b0(param_1);
        if (0 < *(int *)((longlong)puVar5 + 0x2c)) {
          *(int *)((longlong)puVar5 + 0x2c) = -*(int *)((longlong)puVar5 + 0x2c);
        }
        return (uint)(*(int *)(puVar5 + 5) == 0);
      }
      return 1;
    }
  }
  else {
    FUN_140df57b0(param_1);
    if ((int)param_1[3] != 0) goto LAB_140df5efc;
LAB_140df5ed0:
    *(undefined4 *)(puVar5 + 8) = 0xffffffff;
  }
  return 0;
}

