namespace FBLAdesktopApp3
{
    partial class quickAddForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.txtQuickAdd = new System.Windows.Forms.TextBox();
            this.btnQuickAdd = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(12, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(313, 26);
            this.label1.TabIndex = 0;
            this.label1.Text = "Use the quick add feature to add a new student directly from the \r\nformat it is s" +
    "aved in at %appdata%/FBLAapplication/students.txt";
            // 
            // txtQuickAdd
            // 
            this.txtQuickAdd.Location = new System.Drawing.Point(12, 53);
            this.txtQuickAdd.Name = "txtQuickAdd";
            this.txtQuickAdd.Size = new System.Drawing.Size(310, 20);
            this.txtQuickAdd.TabIndex = 1;
            // 
            // btnQuickAdd
            // 
            this.btnQuickAdd.Location = new System.Drawing.Point(128, 79);
            this.btnQuickAdd.Name = "btnQuickAdd";
            this.btnQuickAdd.Size = new System.Drawing.Size(77, 31);
            this.btnQuickAdd.TabIndex = 2;
            this.btnQuickAdd.Text = "Add";
            this.btnQuickAdd.UseVisualStyleBackColor = true;
            this.btnQuickAdd.Click += new System.EventHandler(this.button1_Click);
            // 
            // quickAddForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(334, 122);
            this.Controls.Add(this.btnQuickAdd);
            this.Controls.Add(this.txtQuickAdd);
            this.Controls.Add(this.label1);
            this.Name = "quickAddForm";
            this.Text = "Quick Add";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtQuickAdd;
        private System.Windows.Forms.Button btnQuickAdd;
    }
}