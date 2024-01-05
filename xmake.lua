set_xmakever("2.5.6")

set_project("Traject")

set_version("1.0.0", {build = "%Y%m%d"})

-- Any other platform (if you want me to support it, tell me, including your own OS)
set_allowedplats("windows", "mingw", "linux", "msdosdjgpp", "bds", "macosx", "iphoneos", "watchos", "cross")

add_rules("mode.debug", "mode.release")

set_allowedmodes("release", "debug")

set_languages("c11", "cxx23")

set_kind("binary")

set_encodings("utf-8")

if is_plat("msdosdjgpp") then
	set_allowedarchs("i386") -- x86 ms-dos not support (out of memory)
end

set_defaultarchs("msdosdjgpp|i386")


option("native")
	set_default(false)
	set_showmenu(true)
	add_defines("TRAJECT_NATIVE")
	if is_plat("windows") then
		add_vectorexts("all")
	else
		add_cxflags("-march=native")
	end
option_end()

option("min-win32-sys")
	set_description("Minimum system required Minimum value for _WIN32_WINNT, _WIN32_WINDOWS and WINVER")
	set_default("default")
	set_showmenu(true)
	set_values("default", "WIN10", "WINBLUE", "WIN8", "WIN7", "WS08", "VISTA", "WS03", "WINXP", "WINME", "WIN98", "WIN95")
option_end()

option("cppstdlib")
	set_default("default")
	set_showmenu(true)
	set_values("default", "libstdc++", "libc++")
option_end()


target("traject") -- Traject
add_options("native")

if is_mode("release") then
	set_optimize("aggressive")
	set_strip("all")
	set_policy("build.optimization.lto", true)
elseif is_mode("debug") then
	set_optimize("none")
	set_symbols("debug")
	add_defines("_DEBUG")

	if is_plat("windows") then
		add_cxflags("/guard:cf")
	else
		--add_cxflags("-fsanitize=memory")
		--add_cxflags("-fsanitize=thread")
		--add_cxflags("-fsanitize=undefined")
		--add_cxflags("-fsanitize=leak")
	end
	--add_cxflags("-fsanitize=address")
end

if is_plat("windows") then
	if is_mode("debug") then
		set_runtimes("MTd")
	else
		set_fpmodels("fast")
		add_cxflags("-GL")
		add_ldflags("-LTCG")
		set_runtimes("MT")
	end
	add_cxflags("-GR-")

	local opt_name = get_config("min-win32-sys")
	if opt_name == "default" then	
	elseif opt_name == "WIN10" then
		add_defines("_WIN32_WINNT=0x0A00")
	elseif opt_name == "WINBLUE" then
		add_defines("_WIN32_WINNT=0x0603")
	elseif opt_name == "WIN8" then
		add_defines("_WIN32_WINNT=0x0602")
	elseif opt_name == "WIN7" then
		add_defines("_WIN32_WINNT=0x0601")
	elseif opt_name == "WS08" then
		add_defines("_WIN32_WINNT=0x0600")
	elseif opt_name == "VISTA" then
		add_defines("_WIN32_WINNT=0x0600")
	elseif opt_name == "WS03" then
		add_defines("_WIN32_WINNT=0x0502")
	elseif opt_name == "WINXP" then
		add_defines("_WIN32_WINNT=0x0501")
	elseif opt_name == "WINME" then
		add_defines("_WIN32_WINDOWS=0x0490")
		add_defines("_WIN32_WINNT=0x0490")
	elseif opt_name == "WIN98" then
		add_defines("_WIN32_WINDOWS=0x0410")
		add_defines("_WIN32_WINNT=0x0410")
	elseif opt_name == "WIN95" then
		add_defines("_WIN32_WINDOWS=0x0400")
		add_defines("_WIN32_WINNT=0x0400")
	else
		error("invalid value")
	end

elseif is_plat("mingw") then
	add_cxflags("-fno-rtti")
	if is_mode("release") then
		add_cxflags("-fomit-frame-pointer")
		add_cxflags("-fno-exceptions")
		add_cxflags("-fno-unwind-tables")
		add_cxflags("-fno-asynchronous-unwind-tables")
	end

	local csl_name = get_config("cppstdlib")
	if csl_name == "libstdc++" then
		add_cxflags("-stdlib=libstdc++")
	elseif csl_name == "libc++" then
		add_cxflags("-stdlib=libc++")
	elseif csl_name == "default" then
	else
		error("invalid name")
	end
	add_cxflags("-static-libstdc++")

	add_cxflags("-static")
	add_syslinks("ntdll")

	local opt_name = get_config("min-win32-sys")
	if opt_name == "default" then	
	elseif opt_name == "WIN10" then
		add_defines("_WIN32_WINNT=0x0A00")
	elseif opt_name == "WINBLUE" then
		add_defines("_WIN32_WINNT=0x0603")
	elseif opt_name == "WIN8" then
		add_defines("_WIN32_WINNT=0x0602")
	elseif opt_name == "WIN7" then
		add_defines("_WIN32_WINNT=0x0601")
	elseif opt_name == "WS08" then
		add_defines("_WIN32_WINNT=0x0600")
	elseif opt_name == "VISTA" then
		add_defines("_WIN32_WINNT=0x0600")
	elseif opt_name == "WS03" then
		add_defines("_WIN32_WINNT=0x0502")
	elseif opt_name == "WINXP" then
		add_defines("_WIN32_WINNT=0x0501")
	elseif opt_name == "WINME" then
		add_defines("_WIN32_WINDOWS=0x0490")
	elseif opt_name == "WIN98" then
		add_defines("_WIN32_WINDOWS=0x0410")
	elseif opt_name == "WIN95" then
		add_defines("_WIN32_WINDOWS=0x0400")
	else
		error("invalid value")
	end

elseif is_plat("linux") then
	add_cxflags("-fno-rtti")
	if is_mode("release") then
		add_cxflags("-fomit-frame-pointer")
		add_cxflags("-fno-exceptions")
		add_cxflags("-fno-unwind-tables")
		add_cxflags("-fno-asynchronous-unwind-tables")
	end
	
	local csl_name = get_config("cppstdlib")
	if csl_name == "libstdc++" then
		add_cxflags("-stdlib=libstdc++")
	elseif csl_name == "libc++" then
		add_cxflags("-stdlib=libc++")
	elseif csl_name == "default" then
	else
		error("invalid name")
	end
	add_cxflags("-static-libstdc++")

	add_cxflags("-static")
	if is_arch("x86_64") then
		-- none
	elseif is_arch("i386") then
		-- none
	elseif is_arch("loongarch64") then
		-- none
	end

elseif is_plat("msdosdjgpp") then
	add_cxflags("-fno-rtti")
	if is_mode("release") then
		add_cxflags("-fomit-frame-pointer")
		add_cxflags("-fno-exceptions")
		add_cxflags("-fno-unwind-tables")
		add_cxflags("-fno-asynchronous-unwind-tables")
	end
	
	local csl_name = get_config("cppstdlib")
	if csl_name == "libstdc++" then
		add_cxflags("-stdlib=libstdc++")
	elseif csl_name == "libc++" then
		add_cxflags("-stdlib=libc++")
	elseif csl_name == "default" then
	else
		error("invalid name")
	end
	add_cxflags("-static-libstdc++")

	add_cxflags("-static")
elseif is_plat("bds") then
	add_cxflags("-fno-rtti")
	if is_mode("release") then
		add_cxflags("-fomit-frame-pointer")
		add_cxflags("-fno-exceptions")
		add_cxflags("-fno-unwind-tables")
		add_cxflags("-fno-asynchronous-unwind-tables")
	end
	
	local csl_name = get_config("cppstdlib")
	if csl_name == "libstdc++" then
		add_cxflags("-stdlib=libstdc++")
	elseif csl_name == "libc++" then
		add_cxflags("-stdlib=libc++")
	elseif csl_name == "default" then
	else
		error("invalid name")
	end
	add_cxflags("-static-libstdc++")

	add_cxflags("-static")
elseif is_plat("macosx", "iphoneos", "watchos") then
	add_cxflags("-fno-rtti")
	if is_mode("release") then
		add_cxflags("-fomit-frame-pointer")
		add_cxflags("-fno-exceptions")
		add_cxflags("-fno-unwind-tables")
		add_cxflags("-fno-asynchronous-unwind-tables")
	end

	local csl_name = get_config("cppstdlib")
	if csl_name == "libstdc++" then
		add_cxflags("-stdlib=libstdc++")
	elseif csl_name == "libc++" then
		add_cxflags("-stdlib=libc++")
	elseif csl_name == "default" then
	else
		error("invalid name")
	end
	add_cxflags("-static-libstdc++")

	add_cxflags("-static")

elseif is_plat("cross") then
	add_cxflags("-fno-rtti")
	if is_mode("release") then
		add_cxflags("-fomit-frame-pointer")
		add_cxflags("-fno-exceptions")
		add_cxflags("-fno-unwind-tables")
		add_cxflags("-fno-asynchronous-unwind-tables")
	end
	
	local csl_name = get_config("cppstdlib")
	if csl_name == "libstdc++" then
		add_cxflags("-stdlib=libstdc++")
	elseif csl_name == "libc++" then
		add_cxflags("-stdlib=libc++")
	elseif csl_name == "default" then
	else
		error("invalid name")
	end
	add_cxflags("-static-libstdc++")

	add_cxflags("-static")
end

	add_includedirs("fast_io_readwriterevamp/include")

	if is_plat("windows", "mingw") then
		add_files("traject/windows/set_native_console_cp.cpp")
	end

	add_files("traject/clpara/parameters/**.cpp")
	add_files("traject/main/main.cpp")

	before_build(
		function (target)
			io.open(".git\\FETCH_HEAD", "a+")
			local git_head_file = io.open(".git\\FETCH_HEAD", "r")  
			if not git_head_file then  
				return  
			end  

			local hfr = git_head_file:read()

			git_head_file:close()

			if not hfr then  
				local git_header_h_1 = io.open(".tmp\\git_commit_hash.h", "w")  
				if not git_header_h_1 then  
					return  
				end
				git_header_h_1:write("u8\"No FETCH_HEAD information\"")  
				git_header_h_1:close()
				return  
			end 

			local git_head = "u8\"" .. hfr .. "\""  
  
			local git_header_h = io.open(".tmp\\git_commit_hash.h", "w")  
			if not git_header_h then  
				return  
			end  
  
			local substr = string.gsub(git_head, "\t", " ")  
			git_header_h:write(substr)  
			git_header_h:close()
		end
	)

target_end()

--
-- If you want to known more usage about xmake, please see https://xmake.io
--
-- ## FAQ
--
-- You can enter the project directory firstly before building project.
--
--   $ cd projectdir
--
-- 1. How to build project?
--
--   $ xmake
--
-- 2. How to configure project?
--
--   $ xmake f -p [windows|mingw|macosx|linux|iphoneos ..] -a [x86_64|i386|arm|arm64|loongarch ..] -m [debug|release]
--
-- 3. Where is the build output directory?
--
--   The default output directory is `./build` and you can configure the output directory.
--
--   $ xmake f -o outputdir
--   $ xmake
--
-- 4. How to run and debug target after building project?
--
--   $ xmake run [targetname]
--   $ xmake run -d [targetname]
--
-- 5. How to install target to the system directory or other output directory?
--
--   $ xmake install
--   $ xmake install -o installdir
--
-- 6. Add some frequently-used compilation flags in xmake.lua
--
-- @code
--    -- add debug and release modes
--    add_rules("mode.debug", "mode.release")
--
--    -- add macro definition
--    add_defines("NDEBUG", "_GNU_SOURCE=1")
--
--    -- set warning all as error
--    set_warnings("all", "error")
--
--    -- set language: c99, c++11
--    set_languages("c99", "c++11")
--
--    -- set optimization: none, faster, fastest, smallest
--    set_optimize("fastest")
--
--    -- add include search directories
--    add_includedirs("/usr/include", "/usr/local/include")
--
--    -- add link libraries and search directories
--    add_links("tbox")
--    add_linkdirs("/usr/local/lib", "/usr/lib")
--
--    -- add system link libraries
--    add_syslinks("z", "pthread")
--
--    -- add compilation and link flags
--    add_cxflags("-stdnolib", "-fno-strict-aliasing")
--    add_ldflags("-L/usr/local/lib", "-lpthread", {force = true})
--
-- @endcode
--

