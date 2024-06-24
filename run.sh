conan export bye
conan install . -s build_type=Debug -s arch=x86_64 --build=missing
conan install . -s build_type=Release -s arch=x86_64 --build=missing
xcodegen generate
xcodebuild -project app.xcodeproj -configuration Release -arch x86_64
./build/Release/app
xcodebuild -project app.xcodeproj -configuration Debug -arch x86_64
./build/Debug/app
