// FUN_1401b81b0 @ 1401b81b0
// callees:
//   -> 140dfb5c4 operator_new
//   -> 14000c2d0 FUN_14000c2d0


undefined4 *
FUN_1401b81b0(longlong param_1,int param_2,int param_3,int param_4,undefined8 param_5,
             undefined8 param_6,char param_7)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *local_res8;
  
  uVar8 = DAT_1416b1980;
  uVar7 = DAT_1416b1974;
  puVar9 = *(undefined8 **)(param_1 + 0x30);
  puVar1 = (ulonglong *)(param_1 + 0x30);
  puVar2 = *(undefined8 **)(param_1 + 0x38);
  puVar10 = (undefined4 *)0x0;
  if (puVar9 < puVar2) {
    do {
      puVar3 = (undefined4 *)*puVar9;
      if ((puVar3[3] == -1) && (puVar10 == (undefined4 *)0x0)) {
        *puVar3 = 0xffffffff;
        *(undefined8 *)(puVar3 + 1) = 0;
        *(undefined8 *)(puVar3 + 3) = 0xffffffffffffffff;
        *(undefined8 *)(puVar3 + 5) = 0;
        puVar3[7] = 0;
        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
        puVar10 = puVar3;
      }
      else {
        cVar6 = param_7;
        if ((*(byte *)(puVar3 + 6) & 0x70) == 0) {
          cVar6 = param_7 == '\0';
        }
        if ((((cVar6 != '\0') && (puVar3[3] == param_2)) && (puVar3[4] == param_3)) &&
           (puVar3[5] == param_4)) {
          puVar3[8] = uVar8;
          puVar3[9] = uVar7;
          return puVar3;
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 < puVar2);
    if (puVar10 != (undefined4 *)0x0) goto LAB_1401b832f;
  }
  puVar10 = operator_new(0x28);
  *puVar10 = 0xffffffff;
  *(undefined8 *)(puVar10 + 1) = 0;
  *(undefined8 *)(puVar10 + 3) = 0xffffffffffffffff;
  *(undefined8 *)(puVar10 + 5) = 0;
  puVar10[7] = 0;
  *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
  ppuVar4 = *(undefined4 ***)(param_1 + 0x38);
  local_res8 = puVar10;
  if ((&local_res8 < ppuVar4) && (ppuVar5 = (undefined4 **)*puVar1, ppuVar5 <= &local_res8)) {
    if (ppuVar4 == *(undefined4 ***)(param_1 + 0x40)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x38) =
           *(undefined8 *)(*puVar1 + ((longlong)&local_res8 - (longlong)ppuVar5 >> 3) * 8);
    }
  }
  else {
    if (ppuVar4 == *(undefined4 ***)(param_1 + 0x40)) {
      FUN_14000c2d0(puVar1,1);
    }
    if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x38) = puVar10;
    }
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 8;
LAB_1401b832f:
  puVar10[3] = param_2;
  puVar10[4] = param_3;
  puVar10[5] = param_4;
  puVar10[8] = uVar8;
  puVar10[9] = uVar7;
  return puVar10;
}

