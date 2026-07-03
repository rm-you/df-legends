// FUN_1406ef7a0 @ 1406ef7a0
// callees:
//   -> 140c1dda0 FUN_140c1dda0
//   -> 14000c8b0 FUN_14000c8b0
//   -> 14000c9f0 FUN_14000c9f0
//   -> 1405bc3f0 FUN_1405bc3f0
//   -> 14000c780 FUN_14000c780
//   -> 14000c1a0 FUN_14000c1a0
//   -> 140c1d8d0 FUN_140c1d8d0
//   -> 140050540 FUN_140050540
//   -> 1406d3750 FUN_1406d3750
//   -> 140dfb5b4 free
//   -> EXTERNAL:0000003f SDL_SemWait
//   -> 14047c200 FUN_14047c200
//   -> EXTERNAL:0000003c SDL_SemPost
//   -> 140002020 FUN_140002020
//   -> 140051e20 FUN_140051e20
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1406ef7a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_278 [32];
  longlong local_258 [3];
  longlong *local_240;
  longlong *plStack_238;
  longlong local_230;
  undefined4 local_228 [4];
  undefined8 local_218;
  undefined1 local_210;
  undefined7 uStack_20f;
  undefined8 local_200;
  ulonglong local_1f8;
  undefined1 local_1f0;
  undefined7 uStack_1ef;
  undefined8 local_1e0;
  ulonglong local_1d8;
  char cStack_1c9;
  char local_1c8 [400];
  ulonglong local_38;
  
  local_218 = 0xfffffffffffffffe;
  local_38 = DAT_1410b5008 ^ (ulonglong)auStack_278;
  if ((0 < DAT_141c51398) && ((*DAT_141c51390 & 1) != 0)) {
    FUN_140c1dda0();
    local_240 = (longlong *)0x0;
    plStack_238 = (longlong *)0x0;
    local_230 = 0;
    local_258[0] = 0;
    local_258[1] = 0;
    local_258[2] = 0;
    local_1f8 = 0xf;
    local_200 = 0;
    local_210 = 0;
    FUN_14000c8b0(&local_210,param_2,0,0xffffffffffffffff);
    FUN_14000c9f0(&local_210,"graphics/graphics_*",0x13);
    FUN_14000c9f0(&local_210,&DAT_140eed7b4,2);
    puVar5 = &local_210;
    if (0xf < local_1f8) {
      puVar5 = (undefined1 *)CONCAT71(uStack_20f,local_210);
    }
    FUN_1405bc3f0(puVar5,&local_240);
    local_1d8 = 0xf;
    local_1e0 = 0;
    local_1f0 = 0;
    FUN_14000c780(&local_1f0,"GRAPHICS",8);
    plVar3 = local_240;
    uVar13 = (longlong)plStack_238 - (longlong)local_240 >> 3;
    plVar8 = local_240;
    uVar12 = 0;
    if (uVar13 != 0) {
      do {
        pcVar4 = (char *)FUN_14000c1a0(param_2);
        lVar7 = -(longlong)pcVar4;
        do {
          cVar1 = *pcVar4;
          pcVar4[(longlong)(local_1c8 + lVar7)] = cVar1;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        pcVar4 = &cStack_1c9;
        do {
          pcVar6 = pcVar4;
          pcVar4 = pcVar6 + 1;
        } while (*pcVar4 != '\0');
        *(undefined8 *)pcVar4 = s_graphics__140efe860._0_8_;
        *(undefined2 *)(pcVar6 + 9) = s_graphics__140efe860._8_2_;
        pcVar4 = &cStack_1c9;
        do {
          pcVar4 = pcVar4 + 1;
        } while (*pcVar4 != '\0');
        lVar2 = *plVar8;
        lVar7 = 0;
        do {
          cVar1 = *(char *)(lVar2 + lVar7);
          pcVar4[lVar7] = cVar1;
          lVar7 = lVar7 + 1;
        } while (cVar1 != '\0');
        FUN_140c1d8d0(local_258,local_1c8);
        FUN_14000c780(&DAT_141c3d418,"*** Error(s) found in the file \"");
        uVar10 = 0;
        if (local_1c8[0] != '\0') {
          uVar9 = 0xffffffffffffffff;
          do {
            lVar7 = uVar9 + 1;
            uVar10 = uVar9 + 1;
            uVar9 = uVar9 + 1;
          } while (local_1c8[lVar7] != '\0');
        }
        FUN_14000c9f0(&DAT_141c3d418,local_1c8,uVar10);
        FUN_140050540(&DAT_141c3d418,1,0x22);
        FUN_1406d3750(local_258,&local_1f0,param_2);
        DAT_141c3d428 = 0;
        puVar5 = &DAT_141c3d418;
        if (0xf < DAT_141c3d430) {
          puVar5 = _DAT_141c3d418;
        }
        *puVar5 = 0;
        free((void *)*plVar8);
        uVar11 = (int)uVar12 + 1;
        plVar8 = plVar8 + 1;
        uVar12 = (ulonglong)uVar11;
      } while ((ulonglong)(longlong)(int)uVar11 < uVar13);
    }
    plStack_238 = plVar3;
    local_228[0] = 6;
    SDL_SemWait(DAT_141c33d10);
    FUN_14047c200(&DAT_141c33d18,local_228);
    SDL_SemPost(DAT_141c33d10);
    SDL_SemPost(DAT_141c33d40);
    if (0xf < local_1d8) {
      FUN_140002020(CONCAT71(uStack_1ef,local_1f0),local_1d8 + 1,1);
    }
    local_1d8 = 0xf;
    local_1e0 = 0;
    local_1f0 = 0;
    if (0xf < local_1f8) {
      FUN_140002020(CONCAT71(uStack_20f,local_210),local_1f8 + 1,1);
    }
    local_1f8 = 0xf;
    local_200 = 0;
    local_210 = 0;
    FUN_140051e20(local_258);
    if (local_258[0] != 0) {
      FUN_140002020(local_258[0],local_258[2] - local_258[0] >> 3,8);
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_140002020(plVar3,local_230 - (longlong)plVar3 >> 3,8);
    }
  }
  return;
}

