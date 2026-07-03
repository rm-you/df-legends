// FUN_140607ad0 @ 140607ad0
// callees:
//   -> 140607a50 FUN_140607a50
//   -> 140327d90 FUN_140327d90
//   -> 140051b70 FUN_140051b70
//   -> 140326f70 FUN_140326f70
//   -> 140dfb5b4 free
//   -> 140d209f0 FUN_140d209f0
//   -> 140071310 FUN_140071310
//   -> 140330050 FUN_140330050
//   -> EXTERNAL:000000e1 memmove
//   -> 140051e20 FUN_140051e20
//   -> 140002020 FUN_140002020


void FUN_140607ad0(longlong param_1)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *local_60;
  longlong lStack_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_38;
  
  FUN_140607a50();
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  local_38 = 0;
  FUN_140327d90(&local_48);
  plVar11 = local_48;
  local_60 = (undefined8 *)0x0;
  lStack_58 = 0;
  local_50 = 0;
  iVar7 = 0;
  uVar6 = (longlong)plStack_40 - (longlong)local_48 >> 3;
  plVar10 = local_48;
  if (uVar6 != 0) {
    do {
      FUN_140051b70(&local_60,*plVar10 + 0xf0);
      pvVar1 = (void *)*plVar10;
      if (pvVar1 != (void *)0x0) {
        FUN_140326f70(pvVar1);
        free(pvVar1);
      }
      iVar7 = iVar7 + 1;
      plVar10 = plVar10 + 1;
    } while ((ulonglong)(longlong)iVar7 < uVar6);
  }
  plStack_40 = plVar11;
  plVar10 = (longlong *)(param_1 + 0x278);
  FUN_140d209f0(plVar10);
  iVar7 = (int)(*(longlong *)(param_1 + 0x280) - *plVar10 >> 3) + -1;
  if (-1 < iVar7) {
    uVar6 = lStack_58 - (longlong)local_60 >> 3;
    lVar3 = (longlong)iVar7 * 8;
    puVar4 = local_60;
    lVar9 = lVar3;
    do {
      iVar5 = 0;
      if (uVar6 != 0) {
        pvVar1 = *(void **)(lVar9 + *plVar10);
        puVar8 = puVar4;
        do {
          iVar2 = FUN_140071310((longlong)pvVar1 + 0x140,*puVar8);
          if (iVar2 == 0) {
            if (pvVar1 != (void *)0x0) {
              FUN_140330050(pvVar1);
              free(pvVar1);
            }
            pvVar1 = (void *)(lVar3 + *plVar10 + 8);
            memmove((void *)(lVar3 + *plVar10),pvVar1,
                    *(longlong *)(param_1 + 0x280) - (longlong)pvVar1);
            *(longlong *)(param_1 + 0x280) = *(longlong *)(param_1 + 0x280) + -8;
            puVar4 = local_60;
            break;
          }
          iVar5 = iVar5 + 1;
          puVar8 = puVar8 + 1;
          puVar4 = local_60;
        } while ((ulonglong)(longlong)iVar5 < uVar6);
      }
      lVar3 = lVar3 + -8;
      lVar9 = lVar9 + -8;
      iVar7 = iVar7 + -1;
      plVar11 = local_48;
    } while (-1 < iVar7);
  }
  FUN_140051e20(&local_60);
  if (local_60 != (undefined8 *)0x0) {
    FUN_140002020(local_60,local_50 - (longlong)local_60 >> 3,8);
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_140002020(plVar11,local_38 - (longlong)plVar11 >> 3,8);
  }
  return;
}

