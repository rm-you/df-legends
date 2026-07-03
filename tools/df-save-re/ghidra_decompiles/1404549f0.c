// FUN_1404549f0 @ 1404549f0
// callees:
//   -> 140453a30 FUN_140453a30


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404549f0(char param_1)

{
  int iVar1;
  int iVar2;
  short local_res8 [4];
  short local_res10 [4];
  
  FUN_140453a30(local_res8,local_res10);
  if (local_res10[0] < local_res8[0]) {
    local_res8[0] = local_res10[0];
  }
  iVar1 = local_res8[0] + -1;
  if (param_1 != '\0') {
    if (param_1 == '\x02') {
      DAT_14167ec64 = _DAT_1410b6730 - (iVar1 >> 1);
      DAT_14167ec90 = _DAT_1410b6734 - (DAT_141c513a8 + -2 >> 1);
    }
    if (_DAT_1410b6730 + -5 < DAT_14167ec64) {
      DAT_14167ec64 =
           DAT_14167ec64 + (((DAT_14167ec64 - (_DAT_1410b6730 + -5)) - 1U) / 10) * -10 + -10;
    }
    if (_DAT_1410b6734 + -5 < DAT_14167ec90) {
      DAT_14167ec90 =
           DAT_14167ec90 + (((DAT_14167ec90 - (_DAT_1410b6734 + -5)) - 1U) / 10) * -10 + -10;
    }
    iVar2 = (_DAT_1410b6730 - iVar1) + 5;
    if (DAT_14167ec64 < iVar2) {
      DAT_14167ec64 = DAT_14167ec64 + (((iVar2 - DAT_14167ec64) - 1U) / 10) * 10 + 10;
    }
    iVar2 = (_DAT_1410b6734 - DAT_141c513a8) + 7;
    if (DAT_14167ec90 < iVar2) {
      DAT_14167ec90 = DAT_14167ec90 + (((iVar2 - DAT_14167ec90) - 1U) / 10) * 10 + 10;
    }
    if (DAT_14155b308 != _DAT_1410b6738) {
      DAT_141c3e245 = 1;
      DAT_14155b308 = _DAT_1410b6738;
    }
  }
  if (DAT_141d69554 - iVar1 <= DAT_14167ec64) {
    DAT_14167ec64 = DAT_141d69554 - iVar1;
  }
  iVar1 = (DAT_141d69558 - DAT_141c513a8) + 2;
  if (iVar1 <= DAT_14167ec90) {
    DAT_14167ec90 = iVar1;
  }
  if (DAT_141d6955c <= DAT_14155b308) {
    DAT_14155b308 = DAT_141d6955c + -1;
  }
  iVar1 = 0;
  if (DAT_14167ec64 < 0) {
    DAT_14167ec64 = iVar1;
  }
  if (DAT_14167ec90 < 0) {
    DAT_14167ec90 = iVar1;
  }
  if (DAT_14155b308 < 0) {
    DAT_14155b308 = iVar1;
  }
  return;
}

