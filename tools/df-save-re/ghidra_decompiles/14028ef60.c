// FUN_14028ef60 @ 14028ef60
// callees:
//   -> 140071310 FUN_140071310
//   -> 14000c780 FUN_14000c780
//   -> 140071430 FUN_140071430
//   -> 14014d540 FUN_14014d540
//   -> 140002020 FUN_140002020
//   -> 140dfb590 __security_check_cookie


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14028ef60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  lVar1 = DAT_141d6dd00;
  local_58 = 0xfffffffffffffffe;
  local_30 = DAT_1410b5008 ^ (ulonglong)auStack_88;
  iVar6 = (int)(DAT_141d6dd08 - DAT_141d6dd00 >> 3) + -1;
  lVar7 = (longlong)iVar6;
  if (-1 < iVar6) {
    do {
      iVar2 = FUN_140071310(*(undefined8 *)(lVar1 + lVar7 * 8),param_2);
      if (iVar2 == 0) {
        lVar1 = *(longlong *)(lVar1 + (longlong)iVar6 * 8);
        if (lVar1 == 0) {
          return 0;
        }
        local_38 = 0xf;
        local_40 = 0;
        local_50 = 0;
        FUN_14000c780(&local_50,"<SWAP>",6);
        iVar6 = (int)(param_1[1] - *param_1 >> 3) + -1;
        lVar7 = (longlong)iVar6;
        if (-1 < iVar6) {
          do {
            lVar5 = *(longlong *)(*param_1 + lVar7 * 8);
            iVar6 = (int)(*(longlong *)(lVar5 + 0xb0) - *(longlong *)(lVar5 + 0xa8) >> 3) + -1;
            lVar5 = (longlong)iVar6;
            if (-1 < iVar6) {
              do {
                while( true ) {
                  if (*(ulonglong *)(lVar1 + 0x78) < 0x10) {
                    lVar3 = lVar1 + 0x60;
                  }
                  else {
                    lVar3 = *(longlong *)(lVar1 + 0x60);
                  }
                  lVar3 = FUN_140071430(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*param_1 + lVar7 * 8) + 0xa8)
                                         + lVar5 * 8),lVar3,0,*(undefined8 *)(lVar1 + 0x70));
                  if (lVar3 == -1) break;
                  local_60 = 0xffffffffffffffff;
                  local_68 = 0;
                  FUN_14014d540(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*param_1 + lVar7 * 8) + 0xa8) +
                                 lVar5 * 8),lVar3,*(undefined8 *)(lVar1 + 0x70),&local_50);
                }
                while( true ) {
                  puVar4 = &local_50;
                  if (0xf < local_38) {
                    puVar4 = (undefined1 *)CONCAT71(uStack_4f,local_50);
                  }
                  lVar3 = FUN_140071430(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*param_1 + lVar7 * 8) + 0xa8)
                                         + lVar5 * 8),puVar4,0,local_40);
                  if (lVar3 == -1) break;
                  local_60 = 0xffffffffffffffff;
                  local_68 = 0;
                  FUN_14014d540(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*param_1 + lVar7 * 8) + 0xa8) +
                                 lVar5 * 8),lVar3,local_40,lVar1 + 0x80);
                }
                lVar5 = lVar5 + -1;
              } while (-1 < lVar5);
            }
            lVar5 = *(longlong *)(*param_1 + lVar7 * 8);
            iVar6 = (int)(*(longlong *)(lVar5 + 0x98) - *(longlong *)(lVar5 + 0x90) >> 3) + -1;
            lVar5 = (longlong)iVar6;
            if (-1 < iVar6) {
              do {
                while( true ) {
                  if (*(ulonglong *)(lVar1 + 0x38) < 0x10) {
                    lVar3 = lVar1 + 0x20;
                  }
                  else {
                    lVar3 = *(longlong *)(lVar1 + 0x20);
                  }
                  lVar3 = FUN_140071430(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*param_1 + lVar7 * 8) + 0x90)
                                         + lVar5 * 8),lVar3,0,*(undefined8 *)(lVar1 + 0x30));
                  if (lVar3 == -1) break;
                  local_60 = 0xffffffffffffffff;
                  local_68 = 0;
                  FUN_14014d540(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*param_1 + lVar7 * 8) + 0x90) +
                                 lVar5 * 8),lVar3,*(undefined8 *)(lVar1 + 0x30),&local_50);
                }
                while( true ) {
                  puVar4 = &local_50;
                  if (0xf < local_38) {
                    puVar4 = (undefined1 *)CONCAT71(uStack_4f,local_50);
                  }
                  lVar3 = FUN_140071430(*(undefined8 *)
                                         (*(longlong *)(*(longlong *)(*param_1 + lVar7 * 8) + 0x90)
                                         + lVar5 * 8),puVar4,0,local_40);
                  if (lVar3 == -1) break;
                  local_60 = 0xffffffffffffffff;
                  local_68 = 0;
                  FUN_14014d540(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(*param_1 + lVar7 * 8) + 0x90) +
                                 lVar5 * 8),lVar3,local_40,lVar1 + 0x40);
                }
                lVar5 = lVar5 + -1;
              } while (-1 < lVar5);
            }
            lVar7 = lVar7 + -1;
          } while (-1 < lVar7);
        }
        if (0xf < local_38) {
          FUN_140002020(CONCAT71(uStack_4f,local_50),local_38 + 1,1);
        }
        return 1;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return 0;
}

