# Import the sipconfig.py for the correct python3 version and normal or debug
# build.

import sys

if sys.version_info[1] == 5:
    if 'd' in sys.abiflags:
        try:
            from sipconfig_d5 import *
            from sipconfig_d5 import _pkg_config, _default_macros
        except ImportError:
            raise ImportError('No module named sipconfig; package python3-sip-dbg not installed')
    else:
        from sipconfig_nd5 import *
        from sipconfig_nd5 import _pkg_config, _default_macros

