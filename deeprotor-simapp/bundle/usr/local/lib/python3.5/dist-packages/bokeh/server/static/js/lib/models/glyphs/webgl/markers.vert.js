"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.vertex_shader = "\nprecision mediump float;\nconst float SQRT_2 = 1.4142135623730951;\n//\nuniform float u_pixel_ratio;\nuniform vec2 u_canvas_size;\nuniform vec2 u_offset;\nuniform vec2 u_scale;\nuniform float u_antialias;\n//\nattribute float a_x;\nattribute float a_y;\nattribute float a_size;\nattribute float a_angle;  // in radians\nattribute float a_linewidth;\nattribute vec4  a_fg_color;\nattribute vec4  a_bg_color;\n//\nvarying float v_linewidth;\nvarying float v_size;\nvarying vec4  v_fg_color;\nvarying vec4  v_bg_color;\nvarying vec2  v_rotation;\n\nvoid main (void)\n{\n    v_size = a_size * u_pixel_ratio;\n    v_linewidth = a_linewidth * u_pixel_ratio;\n    v_fg_color = a_fg_color;\n    v_bg_color = a_bg_color;\n    v_rotation = vec2(cos(-a_angle), sin(-a_angle));\n    // Calculate position - the -0.5 is to correct for canvas origin\n    vec2 pos = (vec2(a_x, a_y) + u_offset) * u_scale; // in pixels\n    pos += 0.5;  // make up for Bokeh's offset\n    pos /= u_canvas_size / u_pixel_ratio;  // in 0..1\n    gl_Position = vec4(pos*2.0-1.0, 0.0, 1.0);\n    gl_Position.y *= -1.0;\n    gl_PointSize = SQRT_2 * v_size + 2.0 * (v_linewidth + 1.5*u_antialias);\n}\n";
