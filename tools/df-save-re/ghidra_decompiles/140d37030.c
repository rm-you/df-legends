// FUN_140d37030 @ 140d37030
// callees:
//   -> 140c1d8d0 FUN_140c1d8d0
//   -> 14000c780 FUN_14000c780
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140050540 FUN_140050540
//   -> 14000c8b0 FUN_14000c8b0
//   -> 1406d3750 FUN_1406d3750
//   -> 140dfb5b4 free
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d37030(longlong param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  char *pcVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_248 [32];
  longlong local_228 [4];
  undefined1 local_208;
  undefined7 uStack_207;
  undefined8 local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  undefined8 local_1d8;
  undefined8 local_1d0;
  char local_1c8 [8];
  char local_1c0 [392];
  ulonglong local_38;
  
  local_228[3] = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_248;
  local_228[0] = 0;
  local_228[1] = 0;
  lVar7 = 0;
  local_228[2] = 0;
  pcVar3 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pcVar3 = *(char **)param_2;
  }
  pcVar4 = local_1c8;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)((longlong)&local_1d0 + 7);
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar3 != '\0');
  *(undefined8 *)pcVar3 = s_objects__140f8fe48._0_8_;
  pcVar4[9] = s_objects__140f8fe48[8];
  pcVar3 = (char *)((longlong)&local_1d0 + 7);
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x26b830) + (longlong)*(int *)(param_1 + 0x26b848) * 8);
  lVar5 = 0;
  do {
    cVar1 = *(char *)(lVar2 + lVar5);
    pcVar3[lVar5] = cVar1;
    lVar5 = lVar5 + 1;
  } while (cVar1 != '\0');
  FUN_140c1d8d0(local_228,local_1c8);
  FUN_14000c780(&DAT_141c3d418,"*** Error(s) found in the file \"");
  if (local_1c8[0] != '\0') {
    lVar5 = -1;
    do {
      lVar7 = lVar5 + 1;
      lVar2 = lVar5 + 1;
      lVar5 = lVar7;
    } while (local_1c8[lVar2] != '\0');
  }
  FUN_14000c9f0(&DAT_141c3d418,local_1c8,lVar7);
  FUN_140050540(&DAT_141c3d418,1,0x22);
  local_1d0 = 0xf;
  local_1d8 = 0;
  local_1e8 = 0;
  FUN_14000c8b0(&local_1e8,param_3,0,0xffffffffffffffff);
  local_1f0 = 0xf;
  local_1f8 = 0;
  local_208 = 0;
  FUN_14000c8b0(&local_208,param_2,0,0xffffffffffffffff);
  FUN_1406d3750(local_228,&local_1e8,&local_208);
  DAT_141c3d428 = 0;
  puVar6 = &DAT_141c3d418;
  if (0xf < DAT_141c3d430) {
    puVar6 = _DAT_141c3d418;
  }
  *puVar6 = 0;
  free(*(void **)(*(longlong *)(param_1 + 0x26b830) + (longlong)*(int *)(param_1 + 0x26b848) * 8));
  *(int *)(param_1 + 0x26b848) = *(int *)(param_1 + 0x26b848) + 1;
  if (0xf < local_1f0) {
    FUN_140002020(CONCAT71(uStack_207,local_208),local_1f0 + 1,1);
  }
  local_1f0 = 0xf;
  local_1f8 = 0;
  local_208 = 0;
  if (0xf < local_1d0) {
    FUN_140002020(CONCAT71(uStack_1e7,local_1e8),local_1d0 + 1,1);
  }
  local_1d0 = 0xf;
  local_1d8 = 0;
  local_1e8 = 0;
  FUN_140051e20(local_228);
  if (local_228[0] != 0) {
    FUN_140002020(local_228[0],local_228[2] - local_228[0] >> 3,8);
  }
  return;
}

