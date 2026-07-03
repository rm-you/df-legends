// FUN_1402bb0e0 @ 1402bb0e0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 140051cf0 FUN_140051cf0
//   -> 14000c780 FUN_14000c780
//   -> 14000cb40 FUN_14000cb40
//   -> 14000c9f0 FUN_14000c9f0
//   -> 140051b70 FUN_140051b70
//   -> 14000c2d0 FUN_14000c2d0
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402bb0e0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong uVar6;
  
  local_70 = 0xfffffffffffffffe;
  local_48 = DAT_1410b5008 ^ (ulonglong)auStack_98;
  uVar8 = 0;
  uVar9 = uVar8;
  if (*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3 != 0) {
    do {
      uVar6 = 0;
      lVar1 = *(longlong *)(uVar8 + *(longlong *)(param_1 + 0x20));
      if ((0xb < *(int *)(lVar1 + 0x1b0)) &&
         ((*(byte *)(*(longlong *)(lVar1 + 0x1a8) + 0xb) & 8) != 0)) {
        puVar4 = operator_new(0x18);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        local_78 = puVar4;
        FUN_140051cf0(puVar4,"creature_layer");
        FUN_140051cf0(puVar4,"[OBJECT:CREATURE]");
        local_50 = 0xf;
        local_58 = 0;
        local_68 = 0;
        FUN_14000c780(&local_68,"[CREATURE:",10);
        FUN_14000cb40(&local_68,lVar1,0,0xffffffffffffffff);
        FUN_14000c9f0(&local_68,&DAT_140e7aafc,1);
        FUN_140051b70(puVar4,&local_68);
        uVar7 = uVar6;
        if (*(longlong *)(lVar1 + 0x47f8) - *(longlong *)(lVar1 + 0x47f0) >> 3 != 0) {
          do {
            FUN_140051b70(puVar4,*(undefined8 *)(uVar7 + *(longlong *)(lVar1 + 0x47f0)));
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            uVar7 = uVar7 + 8;
          } while ((ulonglong)(longlong)(int)uVar5 <
                   (ulonglong)(*(longlong *)(lVar1 + 0x47f8) - *(longlong *)(lVar1 + 0x47f0) >> 3));
        }
        ppuVar2 = (undefined8 **)param_2[1];
        if ((&local_78 < ppuVar2) && (ppuVar3 = (undefined8 **)*param_2, ppuVar3 <= &local_78)) {
          if (ppuVar2 == (undefined8 **)param_2[2]) {
            FUN_14000c2d0(param_2,1);
          }
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] =
                 *(undefined8 *)(*param_2 + ((longlong)&local_78 - (longlong)ppuVar3 >> 3) * 8);
          }
        }
        else {
          if (ppuVar2 == (undefined8 **)param_2[2]) {
            FUN_14000c2d0(param_2,1);
          }
          if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
            *(undefined8 *)param_2[1] = puVar4;
          }
        }
        param_2[1] = param_2[1] + 8;
        if (0xf < local_50) {
          FUN_140002020(CONCAT71(uStack_67,local_68),local_50 + 1,1);
        }
      }
      uVar5 = (int)uVar9 + 1;
      uVar8 = uVar8 + 8;
      uVar9 = (ulonglong)uVar5;
    } while ((ulonglong)(longlong)(int)uVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3));
  }
  return;
}

