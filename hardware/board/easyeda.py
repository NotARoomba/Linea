import subprocess
import sys
import os

def run_easyeda2kicad_from_file(input_file, output_dir="./lib/linea", python_path="../../.venv/bin/python"):
    output_dir = os.path.expanduser(output_dir)
    python_path = os.path.abspath(python_path)

    if not os.path.exists(python_path):
        print(f"Error: Python interpreter not found at {python_path}")
        return

    if not os.path.exists(input_file):
        print(f"Error: File not found: {input_file}")
        return

    with open(input_file, "r", encoding="utf-8") as file:
        lines = [line.strip() for line in file if line.strip()]

    for idx, lcsc_id in enumerate(lines, 1):
        cmd = [
            python_path,
            "-m", "easyeda2kicad",
            "--full",
            f"--lcsc_id={lcsc_id}",
            f"--output={output_dir}"
        ]

        print(f"[{idx}/{len(lines)}] Running: {' '.join(cmd)}")
        try:
            subprocess.run(cmd, check=True)
        except subprocess.CalledProcessError as e:
            print(f"❌ Error processing {lcsc_id}: {e}")

    print("✅ All commands completed.")


if __name__ == "__main__":
        input_path = sys.argv[1] if len(sys.argv) > 2 else "lcsc.txt"
        output_path = sys.argv[2] if len(sys.argv) > 2 else "./lib/linea"
        run_easyeda2kicad_from_file(input_path, output_path, os.name == "nt" and "C:/Python312/python.exe" or None)