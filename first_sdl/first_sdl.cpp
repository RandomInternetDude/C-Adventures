<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<CodeBlocks_project_file>
	<FileVersion major="1" minor="6" />
	<Project>
		<Option title="first_sdl" />
		<Option pch_mode="2" />
		<Option compiler="gcc" />
		<Build>
			<Target title="Debug">
				<Option output="bin/Debug/first_sdl" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj/Debug/" />
				<Option type="1" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-g" />
				</Compiler>
			</Target>
			<Target title="Release">
				<Option output="bin/Release/first_sdl" prefix_auto="1" extension_auto="1" />
				<Option object_output="obj/Release/" />
				<Option type="0" />
				<Option compiler="gcc" />
				<Compiler>
					<Add option="-O2" />
				</Compiler>
				<Linker>
					<Add option="-s" />
				</Linker>
			</Target>
		</Build>
		<Compiler>
			<Add option="`sdl-config --cflags`" />
			<Add option="-Wall" />
		</Compiler>
		<Linker>
			<Add option="`sdl-config --libs`" />
		</Linker>
		<Unit filename="cb.bmp" />
		<Unit filename="main.cpp" />
		<Extensions>
			<code_completion />
			<debugger />
		</Extensions>
	</Project>
</CodeBlocks_project_file>
