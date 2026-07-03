// FUN_1404933f0 @ 1404933f0
// callees:
//   -> 14000bae0 FUN_14000bae0


void FUN_1404933f0(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  switch(*(undefined4 *)(param_2 + 4)) {
  case 0:
    FUN_14000bae0(param_1 + 0x50,local_res10);
switchD_14049341f_caseD_1f:
    FUN_14000bae0(param_1 + 0x38,local_res10);
    return;
  case 1:
    FUN_14000bae0(param_1 + 0x20,local_res10);
    return;
  default:
    return;
  case 0x1f:
  case 0x23:
  case 0x27:
  case 0x28:
  case 0x2a:
    goto switchD_14049341f_caseD_1f;
  }
}

