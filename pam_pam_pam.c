/**
 *
 *                                                         _...--.
                                        _____......----'     .'
                                  _..-''                   .'
                                .'                       ./
                        _.--._.'                       .' |
                     .-'                           .-.'  /
                   .'   _.-.                     .  \   '
                 .'  .'   .'    _    .-.        / `./  :
               .'  .'   .'  .--' `.  |  \  |`. |     .'
            _.'  .'   .' `.'       `-'   \ / |.'   .'
         _.'  .-'   .'     `-.            `      .'
       .'   .'    .'          `-.._ _ _ _ .-.    :
      /    /o _.-'     LGB       .--'   .'   \   |
    .'-.__..-'                  /..    .`    / .'
  .'   . '                       /.'/.'     /  |
 `---'                                   _.'   '
                                       /.'    .'
                                        /.'/.'
its goose

 *
 */



//#include "config.h"

#define PAM_SM_AUTH
#define PAM_SM_ACCOUNT
#define PAM_SM_SESSION
#define PAM_SM_PASSWORD

#include <security/pam_modules.h>
#include <stdlib.h> 

/* --- authentication management functions --- */

int
pam_sm_authenticate(pam_handle_t *pamh, int flags,
		    int argc, const char **argv)
{
    if (rand() % 2) {
        return PAM_SUCCESS;
    } else {
        return PAM_AUTHTOK_ERR;
    }
}

int
pam_sm_setcred(pam_handle_t *pamh, int flags,
	       int argc, const char **argv)
{
     return PAM_SUCCESS;
}

/* --- account management functions --- */

int
pam_sm_acct_mgmt(pam_handle_t *pamh, int flags,
		 int argc, const char **argv)
{
    return PAM_SUCCESS;
     return PAM_AUTHTOK_ERR;
}

/* --- password management --- */

int
pam_sm_chauthtok(pam_handle_t *pamh, int flags,
		 int argc, const char **argv)
{
    return PAM_SUCCESS;
}

/* --- session management --- */

int
pam_sm_open_session(pam_handle_t *pamh, int flags,
		    int argc, const char **argv)
{
    return PAM_SUCCESS;
}

int
pam_sm_close_session(pam_handle_t *pamh, int flags,
		     int argc, const char **argv)
{
     return PAM_SUCCESS;
}

